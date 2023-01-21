#include "./Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
    Zombie  *twd;

    twd = zombieHorde(4, "Omar 8");
    // twd->announce();
    delete [] twd;
    return (0);
}
