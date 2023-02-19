#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:

        Brain   *DogBrain;

    public:

        Dog ();
        Dog (std::string type);
        Dog (const Dog &a);
        ~Dog ();
        Dog & operator = (const Dog &a);
        void makeSound() const;
};

#endif

