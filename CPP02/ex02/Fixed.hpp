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

        Fixed (const int floaat);

		Fixed (const float floaat);

        Fixed (const Fixed &a);

        ~Fixed ();

        Fixed & operator = (const Fixed &rhs);

		float	toFloat( void ) const;		

		int 	toInt( void ) const;

        bool    operator > (const Fixed &a) const;

        bool    operator < (const Fixed &a) const;

        bool    operator >= (const Fixed &a);

        bool    operator <= (const Fixed &a);

        bool    operator == (const Fixed &a);

        bool    operator != (const Fixed &a);


        Fixed  operator + (Fixed const &A);
 
        Fixed  operator - (Fixed const &A);

        Fixed  operator * (Fixed const &A);

        // Fixed  operator / (Fixed const &A)
        // {
        //     return (*this);
        // }


        Fixed & operator ++ ()
        {
            this->integer++;
            return (*this);
        }

        Fixed & operator -- ()
        {
            this->integer--;
            return (*this);
        }

        Fixed operator ++ (int)
        {
            Fixed Copy;

            Copy = *this;
            this->integer++;
            return (Copy);
        }

        Fixed operator -- (int)
        {
            Fixed Copy;

            Copy = *this;

            this->integer--;
            return (Copy);
        }

        // Fixed operator * ()
        // {        
        //     Fixed Result;

        //     return (Result);
        // }

        // Fixed operator / ()
        // {
        //     Fixed Result;

        //     return (Result);
        // }



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

