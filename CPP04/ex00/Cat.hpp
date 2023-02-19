#ifndef __CAT_H__
#define __CAT_H__


#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat ();
        Cat (std::string type);
        Cat (const Cat &a);
        virtual ~Cat ();
        Cat & operator = (const Cat &a);
        void    makeSound() const;
};

#endif

