#include "./Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
    // Pointer to Zombie
    // Zombie  *twd;
    randomChump("Omar");

    // twd = newZombie("Omar");
    // twd->announce();
    // delete twd;
    return (0);
}