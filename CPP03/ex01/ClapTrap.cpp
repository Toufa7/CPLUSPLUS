#include "ClapTrap.hpp"

ClapTrap::ClapTrap (const std::string& name)
{
    this->name = name; 
    this->health = 100;
    this->energy = 50;
    this->Attack = 20;
    std::cout << "ClapTrap Paramtrized Constructor\n";
}

ClapTrap::ClapTrap ()
{
    this->name = "No Name"; 
    this->health = 100;
    this->energy = 50;
    this->Attack = 20;
    std::cout << "ClapTrap Default Constructor\n";
}

/*--------------------------------------------------------*/

ClapTrap::ClapTrap (const ClapTrap &a)
{
    this->name = a.name;
    this->health = a.health;
    this->energy = a.energy;
    this->Attack = a.Attack;
}

void    ClapTrap::getinfos ()
{
    std::cout << "Name      = " << this->name << std::endl;
    std::cout << "Health    = " << this->health << std::endl;
    std::cout << "Energy    = " << this->energy << std::endl;
    std::cout << "Attack    = " << this->Attack << std::endl;
}

/*--------------------------------------------------------*/

ClapTrap::~ClapTrap ()
{
    std::cout << "ClapTrap Destructor\n";
}

/*--------------------------------------------------------*/

ClapTrap & ClapTrap::operator = (const ClapTrap &a)
{
    this->name = a.name;
    this->health = a.health;
    this->energy = a.energy;
    this->Attack = a.Attack;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    this->energy -= 1;
    std::cout << "ClapTrap " << this->name << " attacks " << target <<  " causing " << this->Attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->health)
        this->health = 0;
    else
        this->health -= amount;
    std::cout << "ClapTrap " << this->name << " take damage of " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount < this->health && (this->health + amount) <= 20)
        this->health += amount;
    else if (amount >= this->health)
    {
        this->health += amount;
        if (health >= 20)
        {
            health = 20;
        }
    }
    this->energy -= 1;
    std::cout << "ClapTrap " << this->name << " repaired with the amount of " << amount << std::endl;
}
