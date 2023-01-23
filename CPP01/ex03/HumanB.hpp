#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "./Weapon.hpp"


class HumanB
{
    private:
        std::string name;
        Weapon Human_b;
    public:
    // Refrence to a Weapon object
        void    setWeapon(Weapon Human_b);
        void attack();
        HumanB(std::string name);
        ~HumanB();
};

#endif