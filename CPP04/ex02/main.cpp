#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Cat A("Kitty");
    Dog B("Rocky");
    // Animal C;


    A.makeSound();
    B.makeSound();
    // C.makeSound();
    return 0;
}