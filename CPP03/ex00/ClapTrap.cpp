#include "ClapTrap.hpp"

ClapTrap::ClapTrap (const std::string& name)
{
    this->name = name; 
    this->health = 10;
    this->energy = 10;
    this->Attack = 0;
    std::cout << "Paramtrized Constructor\n";
}

ClapTrap::ClapTrap ()
{
    this->name = "No Name"; 
    this->health = 10;
    this->energy = 10;
    this->Attack = 0;
    std::cout << "Default Constructor\n";
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
    std::cout << "name " << this->name << std::endl;
    std::cout << "health " << this->health << std::endl;
    std::cout << "energy " << this->energy << std::endl;
    std::cout << "Attack " << this->Attack << std::endl;
}

/*--------------------------------------------------------*/

ClapTrap::~ClapTrap ()
{
    std::cout << "Destructor\n";
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
        // 11           9   
    if (amount < this->health && (this->health + amount) <= 10)
        this->health += amount;
    else if (amount >= this->health)
    {
        this->health += amount;
        if (health >= 10)
        {
            health = 10;
        }
    }
    this->energy -= 1;
    std::cout << "ClapTrap " << this->name << " repaired with the amount of " << amount << std::endl;
}
