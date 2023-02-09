#include "./Zombie.hpp"

int main()
{
    /*******************************
            * ! Stack
    ********************************/

    randomChump("Omar");

    /*******************************
            * ? Heap
    ********************************/

    Zombie  *TheWalkingDead;

    TheWalkingDead = newZombie("Toufah");
    TheWalkingDead->announce();
    delete TheWalkingDead;
    return (0);
}