#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string name;
    public:
        void    announce( void );
    Zombie(std::string name)
    {
        this->name = name;
        std::cout << "Constructor" << std::endl;
    }
    Zombie()
    {

    };
    ~Zombie()
    {
        std::cout << "Destructor" << std::endl;
    }
};

Zombie* zombieHorde( int N, std::string name );
void randomChump( std::string name );