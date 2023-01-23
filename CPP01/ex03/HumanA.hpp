#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "./Weapon.hpp"

class HumanA
{
    private:
        Weapon      Human_a;
        std::string name;
    public:
        HumanA();
        void attack();
        HumanA(std::string name ,Weapon Hu);
        ~HumanA();
};

#endif