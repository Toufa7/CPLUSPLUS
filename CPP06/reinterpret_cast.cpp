#include <iostream>

int main()
{
        int nbr = 1337;
        int *ptr = &nbr;


        std::cout << *ptr << "\n";

        long long intptr = reinterpret_cast<long long>(ptr);

        std::cout << intptr << "\n";

        int *longptr = reinterpret_cast<int *>(intptr);

        std::cout << *longptr << "\n";
}