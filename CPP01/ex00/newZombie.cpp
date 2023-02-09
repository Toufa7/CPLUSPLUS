#include "./Zombie.hpp"

Zombie* newZombie( std::string name)
{
    Zombie *hello;
    
    hello = new Zombie(name);
    return (hello);
}