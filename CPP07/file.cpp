#include <iostream>
#include <string>

template <typename T, typename F>

void    iter(T *arr, int len, F fun)
{
    for (int i = 0; i < len; i++)
    {
        fun(arr[i]);
    }
}

template <typename T>

void    print(T Value)
{
    std::cout << Value << "\n";
}

int main()
{
    int ArrInt[] = {1,2,3,4,5};

    iter(ArrInt, 2, print<int>);

    std::cout << "**************************\n";
    std::string ArrStrrings[] = {"Who's", "Gonna", "Save", "The", "World"};

    iter(ArrStrrings, sizeof(ArrStrrings)/sizeof(ArrStrrings[0]), print<std::string>);
}