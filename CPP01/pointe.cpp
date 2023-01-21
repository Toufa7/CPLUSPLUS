
// class Pointers
// {
//     private:
//         size_t name;
//     public:
//         void    set(size_t nome)
//         {
//             this->name = nome;
//         }
//         size_t    get()
//         {
//             return (this->name);
//         }
//         void    print();

// };

// void    Pointers::print()
// {
//     cout << this->name;
// }

// int main()
// {
//     Pointers hello;
//     Pointers &ptr = hello;

//     Pointers me;
// }

#include <iostream>
#include <string>

using namespace std;

class Hello
{
    private:
        int a;
    public:
        void    set(int value)
        {
            this->a = value;
        }
        int get()
        {
            return (this->a);
        }
};


int main()
{
    Hello obj1;

    obj1.set(10);

    Hello *ptr = &obj1;

    cout << "Ptr Obj1 " << ptr->get() << endl;

    Hello obj2;

    obj2.set(20);

    ptr = &obj2;

    cout << "Ptr Obj2 " << ptr->get() << endl;

    Hello &ref = obj1;

    cout << "Ref Obj1 " << ref.get() << endl;

    &ref = obj2;

    cout << "Ref Obj1 " << ref.get() << endl;
}

