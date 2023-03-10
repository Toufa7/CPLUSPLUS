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


    Intern someRandomInternObj;
    AForm* rrfPtr;
    try
    {
        rrfPtr = someRandomInternObj.makeForm("Nightmare Names", "Bender");
        delete rrfPtr;
    }
    catch (std::exception &a)
    {
        std::cerr << a.what();
    }
}