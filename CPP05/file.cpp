#include <iostream>

int     division(int a, int b)
{
    if (b == 0)
    {
        throw std::invalid_argument("Arg B is Zeor\n");
    }
    return (a / b);
}

int main()
{
    try
    {
        int rslt = division(70,0);
        std::cout << rslt << "\n";
    }
    catch (std::invalid_argument e)
    {
        std::cout << e.what() << "\n";
    }
    std::cout << "Keeping\n";
}