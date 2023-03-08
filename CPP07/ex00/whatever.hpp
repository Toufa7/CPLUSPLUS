#ifndef WHATEVER_H
#define WHATEVER_H
#include <iostream>
#include <string>


template <typename T>

void    swap(T &a, T&b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>

T    min(T const&a , T const&b)
{
    return (a < b) ? a : b;
}

template <typename T>

T    max(T const&a, T const&b)
{
    return (a > b) ? a : b;
}

class whatever
{
    private:
        // your private members here
    public:
        whatever ();
        whatever (const whatever &a);
        ~whatever ();
        whatever & operator = (const whatever &a);
};

#endif

