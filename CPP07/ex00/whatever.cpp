#include "whatever.hpp"

whatever::whatever ()
{
    std::cout << "Default Constructor whatever\n";
}

/*--------------------------------------------------------*/

whatever::whatever (const whatever &a)
{
    this->operator=(a);
    std::cout << "Copy Constructor whatever\n";
}

/*--------------------------------------------------------*/

whatever::~whatever ()
{
    std::cout << "Destructor whatever\n";
}

/*--------------------------------------------------------*/

whatever & whatever::operator = (const whatever &a)
{
    (void)a;
    std::cout << "Copy Assignement Constructor whatever\n";
    return (*this);
}

