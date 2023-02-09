#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"


int main()
{
    {
        Weapon club = Weapon("Kniff");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Gun");
        bob.attack();
    }

    {
        Weapon club = Weapon("Kniff");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Gun");
        jim.attack();
    }

    return 0;
}