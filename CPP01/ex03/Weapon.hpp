#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>


class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType();
        // For sake of good practice
        void    setType(std::string type);
        // This is actually a pointer point to object that membre function working on
        Weapon();
        Weapon(std::string type);
        ~Weapon();
};

#endif