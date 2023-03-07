#include <iostream>
#include <string>
// A cast that converts a lowlevel const object to the corresponding nonconst type or vice versa

class Person
{
    private:
        const int age;
    public:
        Person() : age(23) {}
        void    ChangeAge(int age) const
        {
            int &NewAge = const_cast<int&>(this->age);
            NewAge = age;            
        }
        void    GetAge()
        {
            std::cout << "Age " << age << "\n";
        }
};

// int main()
// {
//     Person Omar;
//     Omar.GetAge();
//     Omar.ChangeAge(25);
//     Omar.GetAge();
// }

// ************************************************************************************************************


// int main()
// {
//     int a = 65;
            //   static_cast<DataType>(DataType Object)
//     float b = static_cast<float>(a);
//     char c = static_cast<char>(a);


//     std::cout << "A " << a << "\n";
//     std::cout << "B " << b << "\n";
//     std::cout << "C " << c << "\n";
// }


// ************************************************************************************************************


class Parent
{
    public:
        Parent()
        {
            // std::cout << "Parent\n";
        }
        ~Parent ()
        {
            // std::cout << "Parent\n";
        }
        virtual void    whoami()
        {
            std::cout << "Base\n";
        }
};

class Girl : public Parent
{
    public:
        Girl()
        {
            // std::cout << "Girl\n";
        }
        ~Girl()
        {
            // std::cout << "Girl\n";
        }
        void    whoami()
        {
            std::cout << "Derived Girl\n";
        }
};

// class Boy : public Parent
// {
//     public:
//         Boy()
//         {
//             // std::cout << "Boy\n";
//         }
//         ~Boy()
//         {
//             // std::cout << "Boy\n";
//         }
//         void    whoami()
//         {
//             std::cout << "Derived Boy\n";
//         }
// };

int main()
{
    Parent *ParentPtr = new Parent();
    Girl *GirlPtr = new Girl();

    //  dynamic_cast<DerivedClass*>(PointerObject)
    GirlPtr = dynamic_cast<Girl*>(ParentPtr);
    GirlPtr->whoami();

}

