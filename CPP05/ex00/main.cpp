#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat A("Unknown",140);

    std::cout << A;
    try
    {
        for (size_t i = 0; i < 15; i++)
        {
            A.decGrade();
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "\033[1;31mException Catched\033[0m\n";
        std::cerr << e.what();
    }
    std::cout << A;
}