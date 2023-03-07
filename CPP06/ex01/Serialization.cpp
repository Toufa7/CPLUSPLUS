#include "Serialization.hpp"

Serialization::Serialization ()
{
    std::cout << "Default Constructor Serialization\n";
}

/*--------------------------------------------------------*/
Serialization::Serialization (const Serialization &a)
{
    (void)a;
    std::cout << "Copy Constructor Serialization\n";
}

/*--------------------------------------------------------*/
Serialization::~Serialization ()
{
    std::cout << "Destructor Serialization\n";
}

/*--------------------------------------------------------*/
Serialization & Serialization::operator = (const Serialization &a)
{
    (void)a;
    std::cout << "Copy Assignement Constructor Serialization\n";
    return (*this);
}

uintptr_t Serialization::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serialization::deserialize(uintptr_t raw)
{
    return (reinterpret_cast <Data *> (raw));
}