#include <iostream>

class Parent
{
    public:
        virtual void    whoami()
        {
            std::cout << "Base\n";
        }
};

class Girl : public Parent
{
    public:
        void    whoami()
        {
            std::cout << "Derived Girl\n";
        }
};

class Boy : public Parent
{
    public:
        void    whoami()
        {
            std::cout << "Derived Boy\n";
        }
};

int main()
{
    Parent *ParentPtr = new Girl();
    Girl *GirlPtr = new Girl();

    //  dynamic_cast<DerivedClass*>(PointerObject)
    // GirlPtr = dynamic_cast<Girl*>(ParentPtr);
    // if (GirlPtr == NULL)
    // {
    //     std::cout << "Not a Derived from the Base\n";
    // }
    // GirlPtr->whoami();

    Girl &GirlRef = dynamic_cast<Girl&>(ParentPtr&);

}