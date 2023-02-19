#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Animal *a[10];

    int i = 0;
    while (i < 10)
    {
        a[i] = new Dog("Rocky"); 
        i++;
        if (i == 5)
        {
            while (i < 10)
            {
                a[i] = new Cat("Tom"); 
                i++;
            }
        }
    }

    for (int i = 0; i < 10 ; i++)
    {
        std::cout << a[i]->getType() << std::endl;
    }

    for (int i = 0; i < 10 ; i++)
    {
        delete a[i];
    }
    return 0;
    // Dog Base("Hello");
    // Dog tmp = Base;
}