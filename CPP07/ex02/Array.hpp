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
            this->size = 0;
            this->arr = new T[this->size];
        }
        Array (unsigned int n)
        {
            this->size = n;
            this->arr = new T[n];
        }
        
        Array (const Array &a)
        {
            this->arr = new T[0];
            this->operator=(a);
        }

        ~Array ()
        {
            delete [] this->arr;
        }

            Array & operator = (const Array &a)
        {
            delete [] this->arr;
            this->arr = new T[a.size];
            for (size_t i = 0; i < a.size; i++)
            {
                this->arr[i] = a.arr[i];
            }
            this->size = a.size;
            return (*this);
        }

        T   & operator [] (unsigned int index) 
        {
            if (index >= this->size || index < 0)
                throw std::out_of_range("Index is out of bounds");
            return (arr[index]);
        }
        
        const T   & operator [] (unsigned int index) const
        {
            if (index >= this->size || index < 0)
                throw std::out_of_range("Index is out of bounds");
            return (arr[index]);
        }

        int GetSize() const
        {
            return (this->size);
        }
};

#endif

