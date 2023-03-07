#include "IdentifyRealType.hpp"

Base::~Base ()
{
    std::cout << "Destructor Base\n";
}

A::~A ()
{
    std::cout << "Destructor A\n";
}

B::~B ()
{
    std::cout << "Destructor B\n";
}

C::~C ()
{
    std::cout << "Destructor C\n";
}


Base * generate(void)
{
    Base *ptr = NULL;
    srand(time(NULL));
    int choice = rand() % 3;

    switch (choice)
    {
        case 0:
            ptr = new A();
            break;
        case 1:
            ptr = new B();
            break;  
        case 2:
            ptr = new C();
            break;
    }
    return (ptr);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "This is A\n";
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "This is B\n";
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "This is C\n";
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (const std::exception &a)
    {
        std::cerr << a.what() << "\n";
    }

    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (const std::exception &a)
    {
        std::cerr << a.what() << "\n";
    }

    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (const std::exception &a)
    {
        std::cerr << a.what() << "\n";
    }
}
