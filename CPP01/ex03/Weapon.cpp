#include "./Weapon.hpp"

// This is actually a pointer point to object that membre function working on

const std::string& Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon()
{
    std::cout << "Weapon default constructor" << std::endl;    
}

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon Parameterized constructor" << std::endl;    
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor" << std::endl;    
}