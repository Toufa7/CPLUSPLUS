#include <iostream>
#include <string>

int  division(int x, int y)
{
    if (y == 0)
    {
        throw std::runtime_error("Division By Zero");
    }
    return (x/y);
}

int main()
{
    int a = 20;
    int b;

    try
    {
        int result = division(a, b);
        std::cout << "Rslt :" << result << "\n";
    }
    catch(const std::exception& msg)
    {
        std::cerr << "Error : "  << msg.what() << '\n';
    }
}