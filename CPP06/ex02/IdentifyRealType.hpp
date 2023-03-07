#ifndef IdentifyRealType_H
#define IdentifyRealType_H

#include <iostream>
#include <ctime>
#include <typeinfo>


class Base
{
    public:
        virtual ~Base ();
        void print()
        {
            std::cout << "Base\n";
        }
};

class A : public Base
{
    public:
        void print()
        {
            std::cout << "A\n";
        }
        ~A();
};

class B : public Base
{
    public:
        void print()
        {
            std::cout << "A\n";
        }
        ~B();
};

class C : public Base
{
    public:
        void print()
        {
            std::cout << "A\n";
        }
        ~C ();
};

Base * generate(void);      
void identify(Base* p);
void identify(Base& p);

#endif

