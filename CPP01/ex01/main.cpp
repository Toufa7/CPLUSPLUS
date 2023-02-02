#include "./Zombie.hpp"

int main()
{
    Zombie  *TheWalkingDead;

    TheWalkingDead = zombieHorde(10, "Toufa7");
    delete [] TheWalkingDead;
    return (0);
}
