#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *CatBrain;
    public:
        Cat ();
        Cat (std::string type);
        Cat (const Cat &a);
        ~Cat ();
        Cat & operator = (const Cat &a);
        void    makeSound() const;
};

#endif

