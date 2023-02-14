#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Nuno("Unknown");
    
    Nuno.attack("Known");
    // Nuno.takeDamage(10);
    Nuno.getinfos();
    Nuno.beRepaired(9);
    // Nuno.beRepaired(3);
    Nuno.getinfos();
    // Don't forget the overlflow
}

