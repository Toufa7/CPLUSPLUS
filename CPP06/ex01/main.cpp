#include "Serialization.hpp"

int main(void)
{
    Serialization casting;
    Data *ptr = new Data;


    ptr->a  = 23;
    ptr->b  = "POMS";
    std::cout << ptr->a << " " << ptr->b << "\n";



    uintptr_t   uptr    = casting.serialize(ptr);
    Data        *dptr   = casting.deserialize(uptr);

    std::cout << dptr->a << " " << dptr->b << "\n";

    delete ptr;
}
