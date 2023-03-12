#include <iostream>

class Test
{
    public:
        int nbr;
        /* const /*/ int *ptr;

        Test() : nbr(1337), ptr(&nbr){};

        int    CanI() /* const /*/
        {
            // int *pptr = const_cast<int *>(this->ptr);
            // *pptr = 42;
            *ptr = 42;
            return (this->nbr);
        }
};

int main()
{
    Test Me;
    std::cout << Me.CanI();
}