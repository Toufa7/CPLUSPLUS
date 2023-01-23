#include <iostream>
#include <string>

using namespace std;

// class Hello
// {
//     public:
//         // int x;
//         // string name;
//         // Hello(int x, string name)
//         // {
//         //     this->x = x;
//         //     this->name = name;
//         // }
// };
// int    add(int a, int b)
// {
//     return (a + b);
// }

// int main()
// {
//     int (*op)(int, int);


//     op = add;

//     cout << op(5,5) << std::endl;
// }


void myFunction()
{
    std::cout<< "Hello" <<std::endl;
}

int main()
{
    std::cout << (uintptr_t *)&myFunction << std::endl;
    return 0;
}
