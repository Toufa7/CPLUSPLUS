#include "./HumanA.hpp"
#include "./Weapon.hpp"

/*********************************************
        * ? Parametrized Constructor
*********************************************/

HumanA::HumanA(std::string name ,Weapon &Hu) : Human_a(Hu)
{
    this->name = name;
    // std::cout << "Parameterized HumanA constructor" << std::endl;
}

/*********************************************
            * ! Destructor
*********************************************/

HumanA::~HumanA()
{
    // std::cout << "HumanA Destructor" << std::endl;    
}

/*********************************************/

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << Human_a.getType() << std::endl;
}
