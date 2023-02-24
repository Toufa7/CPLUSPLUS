#include <iostream>
#include <string>

int  division(int x, int y)
{
    int a = 1;
    if (y == 0)
    {
        exit(0);
    }
    return (x/y);
}

int main()
{
    int a = 20;
    int b = 2;

    try
    {
        int result = division(a, b);
        std::cout << "Rslt :" << result << "\n";
    }
    catch(int a)
    {
        std::cout << a << '\n';
    }
}