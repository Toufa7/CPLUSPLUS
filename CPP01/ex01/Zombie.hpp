#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


class Zombie
{
    private:
        std::string name;
    public:
        void    announce( void );
        Zombie();
        Zombie(std::string name);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif