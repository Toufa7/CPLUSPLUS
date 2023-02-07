#include "Fixed.hpp"

// /*********************************************
//         * * Default Constructor
// *********************************************/

Fixed::Fixed ()
{
    this->integer = 0;
    // std::cout << "Default constructor called" << std::endl;
}


// /*********************************************
//         * * Parametrized Constructor
// *********************************************/

Fixed::Fixed (const float floaat)
{
	integer = roundf(floaat * 256);
}

Fixed::Fixed (const int floaat)
{
    integer = floaat << this->fractional;
}

// /*********************************************
//         *  Copy Constructor
// *********************************************/

Fixed::Fixed (const Fixed &a)
{
    this->integer = a.integer;
    // std::cout << "Copy constructor called" << std::endl;
}

// /*********************************************
//             * ! Destructor
// *********************************************/

Fixed::~Fixed ()
{
    // std::cout << "Destructor Called" << std::endl;
}

// /*********************************************
//         * ? Copy Assignement Operator
// *********************************************/

Fixed & Fixed::operator = (const Fixed &rhs)
{
    this->integer = rhs.integer;
    // std::cout << "Copy Assignement Operator" << std::endl;
    return (*this);
}

// /*********************************************
//         * ? Operator Overloading
// *********************************************/


bool    Fixed::operator > (const Fixed &a) const
{
    return (this->integer > a.integer);
}

bool    Fixed::operator < (const Fixed &a) const
{
    return (this->integer < a.integer);
}

bool    Fixed::operator >= (const Fixed &a)
{
    return (this->integer >= a.integer);
}

bool    Fixed::operator <= (const Fixed &a)
{
    return (this->integer <= a.integer);
}

bool    Fixed::operator == (const Fixed &a)
{
    return (this->integer == a.integer);
}

bool    Fixed::operator != (const Fixed &a)
{
    return (this->integer == a.integer);
}

Fixed  Fixed::operator + (Fixed const &A)
{
    Fixed Result;
    Result.integer = this->integer +  A.integer;
    return (Result);
}

Fixed  Fixed::operator - (Fixed const &A)       
{ 
    Fixed Result;

    Result.integer = this->integer - A.integer;
    return (Result);
}


Fixed  Fixed::operator * (Fixed const &A)       
{
    this->integer *= ((float)A.integer / 256);
    return (*this);
}


// /*********************************************
//         * ? Members Functions
// *********************************************/


// The resulting number will be the fixed-point representation of the integer
// with 8 bits dedicated to representing the fractional part.

float	Fixed::toFloat( void ) const
{
    return ((float)integer / 256);
}

int 	Fixed::toInt( void ) const
{
    return (integer >> fractional);
}

std::ostream & operator << (std::ostream & os, const Fixed & i)
{
    os << i.toFloat();
    return (os);
}