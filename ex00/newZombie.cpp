#include "./Zombie.hpp"

// This function allows us to create a new Zombie object with a specific name
Zombie* newZombie( std::string name)
{
    // Creating a new Zombie object and assigns the memory address to the pointer variable "hello"
    // the pointer "hello" holds the memory address of the new Zombie object
    Zombie *hello;
    
    // allocating memory for that hello object dynamically,
    hello = new Zombie(name);
    return (hello);
}