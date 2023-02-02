#include "./Zombie.hpp"

// Return a pointer to an object of Zombie class
// The Function use the `new` operator to allocate memory
// The `new` operator returns a pointer to the allocated memory

Zombie* newZombie( std::string name)
{
    Zombie *hello;
    
    hello = new Zombie(name);
    return (hello);
}