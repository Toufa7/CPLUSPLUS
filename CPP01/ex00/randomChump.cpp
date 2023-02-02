#include "./Zombie.hpp"

void randomChump( std::string name )
{
    Zombie HelloZombie(name);
    HelloZombie.announce();
}