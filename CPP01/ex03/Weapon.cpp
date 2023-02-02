#include "./Weapon.hpp"

// This is actually a pointer point to object that membre function working on

/*********************************************
        * * Default Constructor
*********************************************/

Weapon::Weapon()
{
    // std::cout << "Weapon default constructor" << std::endl;    
}

/*********************************************
        * ? Parametrized Constructor
*********************************************/

Weapon::Weapon(std::string type)
{
    // std::cout << "Weapon Parameterized constructor" << std::endl;    
    this->type = type;
}

/*********************************************
            * ! Destructor
*********************************************/

Weapon::~Weapon()
{
    // std::cout << "Weapon Destructor" << std::endl;    
}

/*********************************************/


const std::string& Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
