#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta      = new Animal();
    const Animal* i         = new Cat("Kitty");
    const Animal* j         = new Dog("Rocky");
    const WrongAnimal *k    = new WrongCat();

    std::cout << "**************************************\n";
    std::cout << "Dog " << j->getType() << std::endl;
    std::cout << "Cat " << i->getType() << std::endl;

    std::cout << "**************************************\n";
    meta->makeSound();
    std::cout << "**************************************\n";
    i->makeSound();
    j->makeSound();
    std::cout << "**************************************\n";
    k->makeSound();
    std::cout << "**************************************\n";

    delete meta;
    delete j;
    delete i;
    delete k;
    return 0;
}




