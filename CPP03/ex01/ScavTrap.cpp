#include "ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
	std::cout << "ScavTrap Default Constructor\n";  
}

ScavTrap::ScavTrap (const std::string& name)
{
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->Attack = 20;
	std::cout << "ScavTrap Parametrized Constructor\n";  
}

ScavTrap::ScavTrap (const ScavTrap &a)
{
    this->name = a.name;
    this->health = a.health;
    this->energy = a.energy;
    this->Attack = a.Attack;
    std::cout << "ScavTrap Copy Constructor\n";
}

ScavTrap::~ScavTrap ()
{
	std::cout << "ScavTrap Destructor\n";
}

ScavTrap & ScavTrap::operator = (const ScavTrap &a)
{
    this->name = a.name;
    this->health = a.health;
    this->energy = a.energy;
    this->Attack = a.Attack;
    std::cout << "ScavTrap Copy Assignemt Operator Constructor\n";
    return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
