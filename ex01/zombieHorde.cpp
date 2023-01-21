#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *hello;
    
    hello = new Zombie[N] ;
    for (int i = 0; i < N ; i++)
    {
        randomChump(name);
    }
    return (hello);
}