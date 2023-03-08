#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>

template <typename T>

class Array
{
    private:
        T *arr;
        unsigned int size;
    public:
        Array ()
        {
            this->arr = new T;
            this->size = 0;
        }

        Array (unsigned int n)
        {
            this->size = n;
            this->arr = new T[n];
        }
        
        Array (const Array &a)
        {
            T *arr = new T[a.size];
            for (size_t i = 0; i < a.size; i++)
            {
                arr[i] = a.arr[i];
            }
            this->size = a.size;
        }

        ~Array ()
        {
            delete T;
        }

        Array & operator = (const Array &a)
        {

            T *tmp = new T[a.size];
            for (size_t i = 0; i < a.size; i++)
            {
                tmp[i] = a.arr[i];
            }
            delete [] this->arr;
            this->arr = tmp;
            this->size = a.size;
            return (*this);
        }

        T   & operator [] (const int size)
        {
            try
            {
                if (size > this->size)
                    throw std::out_of_range("Index is out of bounds");
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    
        const T   & operator [] (const int size) const 
        {
            try
            {
                if (size > this->size)
                    throw std::out_of_range("Index is out of bounds");
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }

        int size() const
        {
            return (this->size);
        }
};



// this->arr = new T(0);

#endif

