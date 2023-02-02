#include "./Zombie.hpp"

// It's important to free the dynamically allocated memory when it is no longer needed to prevent memory leaks in the program

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