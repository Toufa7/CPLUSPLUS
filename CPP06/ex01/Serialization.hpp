#ifndef __SERIALIZATION_H__
#define __SERIALIZATION_H__
#include <iostream>

struct  Data
{
    int         a;
    std::string b;
};

class Serialization
{
    public:
        Serialization ();
        Serialization (const Serialization &a);
        ~Serialization ();
        Serialization & operator = (const Serialization &a);
        
        uintptr_t   serialize(Data* ptr);
        Data*       deserialize(uintptr_t raw);
};

#endif

