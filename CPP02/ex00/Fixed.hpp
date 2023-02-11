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
		~Fixed();
		Fixed( Fixed const & copy);
		Fixed &	operator = (const Fixed &rhs );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif