#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void    a()
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
    delete rrf;
}

int main()
{
    a();
    while (1);
}