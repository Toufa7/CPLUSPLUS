#include <iostream>
#include <string>


#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{
    private:
        std::string name;
    public:
        void announce( void );
    Zombie(std::string name)
    {
        this->name = name;
        std::cout << "Constructor" << std::endl;
    }
    ~Zombie()
    {
        std::cout << "Destructor" << std::endl;
    }   
};


Zombie* newZombie( std::string name);
void randomChump( std::string name );

#endif