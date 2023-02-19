#ifndef WrongAnimal_H
#define WrongAnimal_H

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal ();
        WrongAnimal (const WrongAnimal &a);
        ~WrongAnimal ();
        WrongAnimal & operator = (const WrongAnimal &a);
        void    makeSound() const;
};

#endif

