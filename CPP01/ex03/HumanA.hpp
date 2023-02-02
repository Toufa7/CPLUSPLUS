#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "./Weapon.hpp"

class HumanA
{
    private:
        std::string     name;
        Weapon          &Human_a;
    public:
        HumanA(std::string name ,Weapon& Hu);
        void attack();
        ~HumanA();
};

#endif