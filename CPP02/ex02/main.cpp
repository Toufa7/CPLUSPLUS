#include "Fixed.hpp"

int main( void )
{
    Fixed a(100.78f);

    std::cout << "A     = " << a << std::endl;

    Fixed b(2.98f);

    std::cout << "B     = " << b << std::endl;

    Fixed c = a / b;

    std::cout << "C     = " << c << std::endl;

    Fixed d = c * b;

    std::cout << "D     = c * b = " << c << std::endl;

    a = c + b;

    std::cout << "New A = c + b = " << a << std::endl;

    b = c - b;

    std::cout << "New B = c - b = " << b << std::endl;



    std::cout << (a < b) << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (a <= b) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a == b) << std::endl;

    std::cout << "++B = " << ++b << std::endl;
    std::cout << "B++ = " << b++ << std::endl;
    std::cout << "Max = " << Fixed::max( a, b ) << std::endl;
    std::cout << "Min = " << Fixed::min( a, b ) << std::endl;


    return 0;
}