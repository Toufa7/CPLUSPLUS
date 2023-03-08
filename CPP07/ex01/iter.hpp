#ifndef ITER_H
#define ITER_H
#include <iostream>

template <typename T, typename F>

void    iter(T *arr, size_t len, F fun)
{
    for (size_t i = 0; i < len; i++)
    {
        fun(arr[i]);
    }
}

template <typename T>

void    Printing(T Value)
{
    std::cout << Value << "\n";
}

#endif

