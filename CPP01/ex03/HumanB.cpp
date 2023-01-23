#include "./HumanB.hpp"
#include "./Weapon.hpp"

void    HumanB::setWeapon(Weapon Human_b)
{
    this->Human_b = Human_b;
}
void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << Human_b.getType() << std::endl;
}
HumanB::HumanB(std::string name)
{
    this->name = name;
    std::cout << "Para HumanB constructor" << std::endl;
}
HumanB::~HumanB()
{
    std::cout << "HumanB Destructor" << std::endl;    
}