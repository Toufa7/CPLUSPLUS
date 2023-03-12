#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void    function()
{
        Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
    delete rrf;


    Intern someRandomInternObj;
    AForm* rrfPtr;
    try
    {
        rrfPtr = someRandomInternObj.makeForm("Presidential Pardon", "Bender");
        delete rrfPtr;
    }
    catch (std::exception &a)
    {
        std::cerr << a.what();
    }
}

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
    delete rrf;


    Intern someRandomInternObj;
    AForm* rrfPtr;
    try
    {
        rrfPtr = someRandomInternObj.makeForm("Presidential Pardon", "Bender");
        delete rrfPtr;
    }
    catch (std::exception &a)
    {
        std::cerr << a.what();
    }
}