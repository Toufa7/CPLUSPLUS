#include "./Zombie.hpp"

/*******************************
        * ? Parametrized Constructor
********************************/

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Constructor" << std::endl;
}


void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


/*******************************
        * ! Destructor
********************************/

Zombie::~Zombie()
{
    std::cout << "Destructor " << this->name << " Destroyed"<< std::endl;
}  