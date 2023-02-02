#include "./HumanB.hpp"
#include "./Weapon.hpp"

/*********************************************
        * ? Parametrized Constructor
*********************************************/

HumanB::HumanB(std::string name)
{
    this->name = name;
    // std::cout << "Parametrized HumanB constructor" << std::endl;
}

/*********************************************
            * ! Destructor
*********************************************/

HumanB::~HumanB()
{
    // std::cout << "HumanB Destructor" << std::endl;    
}

/*********************************************/


void    HumanB::setWeapon(Weapon& Human_b)
{
    this->Human_b = &Human_b;
}


void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << Human_b->getType() << std::endl;
}