#include "./ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac == 2)
        ScalarConverter::Conversion(av[1]);
    else
        std::cout << "Example:\n./convert argument \n";
}