#include "./Zombie.hpp"

/*********************************************
        * * Default Constructor
*********************************************/

Zombie::Zombie()
{
    // std::cout << "Default Constructor" << std::endl;
}

/*********************************************
        * ? Parametrized Constructor
*********************************************/

Zombie::Zombie(std::string name)
{
    this->name = name;
    // std::cout << "Parametrized Constructor" << std::endl;
}

/*********************************************
            * ! Destructor
*********************************************/

Zombie::~Zombie()
{
    // std::cout << "Destructor" << std::endl;
}

/*********************************************/

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}