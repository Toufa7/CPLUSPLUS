#ifndef __FIXED_H__
#define __FIXED_H__


#include <iostream>
#include <cmath>

class Fixed
{
    private:

        int					integer;
		static const int	fractional = 8;
    
    public:

        Fixed();
        ~Fixed ();
        Fixed (const Fixed &a);
        Fixed & operator = (const Fixed &rhs);


        Fixed (const int floaat);
		Fixed (const float floaat);

		float	toFloat( void ) const;		
		int 	toInt( void ) const;


        bool    operator > (const Fixed &a) const;
        bool    operator < (const Fixed &a) const;
        bool    operator >= (const Fixed &a);
        bool    operator <= (const Fixed &a);
        bool    operator == (const Fixed &a);
        bool    operator != (const Fixed &a);

        Fixed & operator ++ ();
        Fixed & operator -- ();
        Fixed operator ++ (int);
        Fixed operator -- (int);

        Fixed  operator + (Fixed const &A);
        Fixed  operator - (Fixed const &A);
        Fixed operator * (Fixed const &A);
        Fixed operator / (Fixed const &A);

        static Fixed &   min(Fixed &A, Fixed & B)
        {
            return ((A < B) ? A : B);
        }
        static Fixed &   max(Fixed &A, Fixed & B)
        {
            return ((A > B) ? A : B);
        }
        static Fixed const &   min(Fixed const & A, Fixed const & B)
        {
            return ((A < B) ? A : B);
        }
        static Fixed const &   max(Fixed const & A, Fixed const & B)
        {
            return ((A > B) ? A : B);
        }
};


std::ostream & operator << (std::ostream & os, const Fixed & i);


#endif
