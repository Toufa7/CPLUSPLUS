#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"


int main()
{
    {
        Weapon club = Weapon("Weapon 1");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Weapon 2");
        bob.attack();
    }

    {
        Weapon club = Weapon("Weapon 1");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Weapon 2");
        jim.attack();
    }

    return 0;
}