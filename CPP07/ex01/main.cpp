#include "iter.hpp"

int main()
{

    int ArrInt[] = {1,2,3,4,5};

    iter(ArrInt, 2, Printing<int>);

    std::string ArrStrrings[] = {"Who's", "Gonna", "Save", "The", "World"};

    iter(ArrStrrings, sizeof(ArrStrrings)/sizeof(ArrStrrings[0]), Printing<std::string>);

    double ArrDoub[] = {1.2,2.3,3.4,4.5,5.6};

    iter(ArrDoub, 2, Printing<double>);
}

