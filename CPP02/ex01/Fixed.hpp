#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

// The value of fractional determines the precision of the fixed-point representation

class Fixed
{
	private:
        int					integer;
		static const int	fractional = 8;
	public:
		Fixed();
		~Fixed();
		Fixed( Fixed const & copy );
		Fixed &		operator = ( Fixed const & rhs );

		Fixed (const int floaat);
		Fixed (const float floaat);

		float	toFloat( void ) const;
		int 	toInt( void ) const;
};

std::ostream &	operator << ( std::ostream & OstreamObject, Fixed const & Obj );

#endif
