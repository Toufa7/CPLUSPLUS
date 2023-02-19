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
        Animal & operator = (const Animal &a);
        std::string getType() const;
        virtual ~Animal ();
        virtual void    makeSound() const;
};

#endif