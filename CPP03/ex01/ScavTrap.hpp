#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    public:
        ScavTrap ();
        ScavTrap (const std::string& name);
        ScavTrap (const ScavTrap &a);
        ~ScavTrap ();
        ScavTrap & operator = (const ScavTrap &a);
        void guardGate();
};

#endif

