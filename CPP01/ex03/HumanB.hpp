#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "./Weapon.hpp"


class HumanB
{
    private:
        std::string name;
        Weapon      *Human_b;
    public:
        HumanB(std::string name);
        void    attack();
        void    setWeapon(Weapon& Human_b);
        ~HumanB();
};

#endif