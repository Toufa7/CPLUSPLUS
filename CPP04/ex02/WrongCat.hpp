#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


class WrongCat : public WrongAnimal
{
    private:
        // your private members here
    public:
        WrongCat ();
        WrongCat (const WrongCat &a);
        ~WrongCat ();
        WrongCat & operator = (const WrongCat &a);
};

#endif