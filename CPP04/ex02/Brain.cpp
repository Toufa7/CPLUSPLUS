#include "Brain.hpp"

Brain::Brain ()
{
    std::cout << "Default Constructor Brain\n";
}

/*--------------------------------------------------------*/
Brain::Brain (const Brain &a)
{
    std::cout << "Copy Constructor Brain\n";
    this->operator=(a);
}

/*--------------------------------------------------------*/
Brain::~Brain ()
{
    std::cout << "Destructor Brain\n";
}

/*--------------------------------------------------------*/
Brain & Brain::operator = (const Brain &a)
{
    std::cout << "Copy Assignement Constructor Brain\n";
    for (int i = 0; i < 100 ; i++)
    {
        this->ideas[i] = a.ideas[i];
    }
    return (*this);
}

