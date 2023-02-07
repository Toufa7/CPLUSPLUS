#include "Fixed.hpp"

int main( void )
{
    // Fixed a;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;

    Fixed a(5.1f);

    std::cout << a << std::endl;

    Fixed b(10.1f);

    std::cout << b << std::endl;

    Fixed c = (a + b) ;

    std::cout << c << std::endl;

    return 0;
}