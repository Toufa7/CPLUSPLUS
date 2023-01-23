#include "./HumanA.hpp"
#include "./Weapon.hpp"

HumanA::HumanA()
{
    std::cout << "HumanA default constructor" << std::endl;    
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << Human_a.getType() << std::endl;
}

HumanA::HumanA(std::string name ,Weapon Hu)
{
    this->Human_a = Hu;
    this->name = name;
    std::cout << "Parameterized HumanA constructor" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA Destructor" << std::endl;    
}

