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

}

/*********************************************
        *  Copy Constructor
*********************************************/

Fixed::Fixed( Fixed const & copy )
{
	this->integer = copy.integer;
}

/*********************************************
        * ? Operator Overloading
*********************************************/

Fixed &		Fixed::operator = ( Fixed const & rhs )
{
	this->integer = rhs.integer;
	return (*this);
}


/*********************************************
        * * Setters
*********************************************/


Fixed::Fixed (const float floaat)
{
	integer = roundf(floaat * 256);
}


Fixed::Fixed (const int floaat)
{
	integer = floaat << this->fractional;
}


/*********************************************
        *  Member Functions
*********************************************/






int 	Fixed::toInt( void ) const
{
	// Fixed-point to integer
	int int2float;
	int2float = integer >> fractional;

	std::cout << "ToInt " << int2float << std::endl;
	return (int2float);
}

float	Fixed::toFloat( void ) const
{
	// Float to fixed point then to an integer
	float float2int;
	float2int = (float)integer / 256;

	std::cout << "toFloat " << float2int << std::endl;
	return (float2int);
}


std::ostream &	operator << ( std::ostream & OstreamObject, Fixed const & Obj )
{
	OstreamObject << Obj.toFloat();
	return (OstreamObject);
}