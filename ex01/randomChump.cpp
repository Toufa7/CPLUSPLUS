#include "./Zombie.hpp"

void randomChump( std::string name )
{
    Zombie hi(name);

    hi.announce();
}