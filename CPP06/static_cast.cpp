#include <iostream>

int main()
{
    float a = 65.75;
    int b = static_cast<int>(a);
    char c = static_cast<char>(a);
    double d = static_cast<double>(a);

    std::cout << "A " << a << "\n";
    std::cout << "B " << b << "\n";
    std::cout << "C " << c << "\n";
    std::cout << "D " << d << "\n";
}