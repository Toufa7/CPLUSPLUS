#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    // <data_type> *<ptr_name> = new <dat_type>[<size>]
    Zombie *NewZombie = new Zombie[N];

    for (int i = 0; i < N ; i++)
    {
        NewZombie[i] = name;
        NewZombie->announce();
    }
    return (NewZombie);
}