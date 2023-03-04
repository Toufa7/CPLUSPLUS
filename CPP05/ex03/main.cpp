#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
    delete rrf;


    // Intern someRandomIntern;
    // AForm* rrf;
    // try
    // {
    //     rrf = someRandomIntern.makeForm("Cobotomy Request", "Bender");
    // }
    // catch (std::exception &a)
    // {
    //     std::cerr << a.what();
    // }

}