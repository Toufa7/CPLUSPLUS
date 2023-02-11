#include "Fixed.hpp"

/*********************************************
        * * Default Constructor
*********************************************/

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

/*********************************************
        * ! Destructor
*********************************************/

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/*********************************************
        *  Copy Constructor
*********************************************/

Fixed::Fixed( Fixed const & copy )
{
    std::cout << "Copy constructor called" << std::endl;
	this->integer = copy.integer;
}

/*********************************************
        * ? Operator Overloading
*********************************************/

Fixed &		Fixed::operator = ( Fixed const & rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->integer = rhs.integer;
	return (*this);
}

/*********************************************
        * * Setters
*********************************************/


Fixed::Fixed (const float floaat)
{
	integer = roundf(floaat * pow(2, this->fractional));
	std::cout << "I Enter Float  = " << integer << "\n";
}

Fixed::Fixed (const int floaat)
{
	integer = floaat << this->fractional;
	
	std::cout << "I Enter  = " << integer << "\n";
}


/*********************************************
        *  Member Functions
*********************************************/

// Converting a Fixed-point number to an integer
// the function takes the "integer" part of the fixed-point number
// and discards the fractional part by shifting the bits to the right by "fractional" places

int 	Fixed::toInt( void ) const
{
	int int2float;

	int2float = integer >> fractional;
	return (int2float);
}

// Converting its internal representation to a floating-point number

float	Fixed::toFloat( void ) const
{
	float float2int;

	float2int = (float)integer / pow(2, this->fractional);
	return (float2int);
}

std::ostream &	operator << ( std::ostream & OstreamObject, Fixed const & Obj)
{
	OstreamObject << Obj.toInt();
	return (OstreamObject);
}