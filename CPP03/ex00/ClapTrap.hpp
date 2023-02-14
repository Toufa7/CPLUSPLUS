#ifndef CLAPTRAP_H
#define CLAPTRAP_H


#include <iostream>
#include <string>

class ClapTrap
{
    private:

        std::string     name;
        unsigned int    health;
        unsigned int    energy;
        unsigned int    Attack;

    public:
        ClapTrap (const std::string& name);
        ClapTrap ();

        ClapTrap (const ClapTrap &a);

        ~ClapTrap ();
        
        ClapTrap & operator = (const ClapTrap &a);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void getinfos();
};

#endif

