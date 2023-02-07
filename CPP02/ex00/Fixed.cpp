#include "Fixed.hpp"

/*********************************************
        * * Default Constructor
*********************************************/

Fixed::Fixed()
{
        this->integer = 0;
        std::cout << "Default constructor called" << std::endl;
}

/*********************************************
        * ! Destructor
*********************************************/

Fixed::~Fixed()
{
        std::cout << "Destructor Called" << std::endl;
}

/*********************************************
        *  Copy Constructor
*********************************************/

Fixed::Fixed(Fixed const & copy)
{
        this->integer = copy.integer;
        std::cout << "Copy constructor called" << std::endl;
}

/*********************************************
        * ? Operator Overloading
*********************************************/

Fixed	&	Fixed::operator = (const Fixed &rhs )
{
        std::cout << "Copy assignment operator called" << std::endl;
        this->integer = rhs.integer;
        return (*this);
}

/*********************************************
        *  Member Functions
*********************************************/

int     Fixed::getRawBits(void) const
{
        std::cout << "getRawBits member function called" << std::endl;
        return (this->integer);
}

void    Fixed::setRawBits(int const raw)
{
        this->integer = raw;
}

