#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat A("Unknown",140);

    std::cout << A;
    try
    {
        for (size_t i = 0; i < 11; i++)
        {
            A.incGrade();
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "Exception Catched : ";
        std::cerr << e.what();
    }
    std::cout << A;
}