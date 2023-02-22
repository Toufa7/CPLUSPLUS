#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat A;

    A.incGrade();
    std::cout << A;
    try
    {
        A.incGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}