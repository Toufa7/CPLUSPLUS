#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal ();
        Animal (const Animal &a);
        Animal & operator = (const Animal &a);
        std::string getType() const;
        virtual ~Animal ();
        virtual void    makeSound() const = 0;
};

#endif

