#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
        int					integer;
		static const int	fractional = 8;
	public:
		Fixed();

		Fixed (const int floaat);
		Fixed (const float floaat);

		Fixed( Fixed const & copy );

		~Fixed();

		Fixed &		operator = ( Fixed const & rhs );
		float	toFloat( void ) const;
		int 	toInt( void ) const;
};

std::ostream &	operator << ( std::ostream & OstreamObject, Fixed const & Obj );

// the first parameter of an output operator is a reference to a nonconst ostream object.
// The ostream is nonconst because writing to the stream changes its state. 




#endif