#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter ()
{
    // std::cout << "Default Constructor ScalarConverter\n";
}

/*--------------------------------------------------------*/
ScalarConverter::ScalarConverter (const ScalarConverter &a)
{
    this->operator=(a);
    std::cout << "Copy Constructor ScalarConverter\n";
}

/*--------------------------------------------------------*/
ScalarConverter::~ScalarConverter ()
{ 
    // std::cout << "Destructor ScalarConverter\n";
}

/*--------------------------------------------------------*/
ScalarConverter & ScalarConverter::operator = (const ScalarConverter &a)
{
    (void)a;
    std::cout << "Copy Assignement Constructor ScalarConverter\n";
    return (*this);
}

void ScalarConverter::Conversion(std::string str)
{
    try
    {
        float a = std::stof(str);
        bool flag = false;
        int integer = static_cast<int>(a);
        char charchter = static_cast<char>(a);
        double doublee = static_cast<double>(a);

        if (str.compare(0, 3, "nan") == 0)
        {
            std::cout << "char: " << "impossible" << "\n";
            std::cout << "int: " <<  "impossible" << "\n";
            flag = true;
        }
        else if (isprint(static_cast<char>(a)))
            std::cout << "char: " << charchter << "\n";
        else if (!isprint(static_cast<char>(a)))
            std::cout << "char: " << "Non displayable" << "\n";
    
        if (!flag)
            std::cout << "int: " <<  integer << "\n";
        std::cout << "float: " << std::fixed << std::setprecision(1) << a << "f\n";
        std::cout << "double: " << doublee << "\n";
    }
    catch (std::exception &e)
    {
        std::cout << "\033[1;31mException Catched\033[0m\n";
        std::cout << e.what() << std::endl;
    }
}