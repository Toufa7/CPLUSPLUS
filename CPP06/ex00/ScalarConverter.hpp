#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <iomanip>
#include <iostream>
#include <cstring>


class ScalarConverter
{
    public:
        ScalarConverter ();
        ScalarConverter (const ScalarConverter &a);
        ~ScalarConverter ();
        ScalarConverter & operator = (const ScalarConverter &a);

        static void   Conversion(std::string str);
};

#endif