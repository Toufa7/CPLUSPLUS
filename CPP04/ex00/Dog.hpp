#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog ();
        Dog (std::string type);
        Dog (const Dog &a);
        virtual ~Dog ();
        Dog & operator = (const Dog &a);
        void makeSound() const;
};

#endif

