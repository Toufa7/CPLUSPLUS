#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal ();
        Animal (const Animal &a);
        virtual ~Animal ();
        Animal & operator = (const Animal &a);
        std::string getType() const;
        virtual void    makeSound() const;
};

#endif