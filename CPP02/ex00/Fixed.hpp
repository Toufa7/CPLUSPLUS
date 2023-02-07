#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
        int					integer;
		static const int	fractional = 8;
	public:
		Fixed();
		Fixed( Fixed const & copy);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		Fixed &	operator = (const Fixed &rhs );
};


// The return (*this); in the copy assignment operator means to return the object that is being assigned to, rather than a new or different object.

// Const keyword ensure that object passed is not modified by the assignment operation
// It should make no sense to modify an object of which you just want to make a copy,
// The purpose of this operator overloading is to allow you to copy the values from one object to another

#endif