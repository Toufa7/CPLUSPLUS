#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern ()
{
	std::cout << "Default Constructor Intern\n";
}

/*--------------------------------------------------------*/
Intern::Intern (const Intern &a)
{
	(void)a;
	std::cout << "Parametrized Constructor Intern\n";
}

/*--------------------------------------------------------*/
Intern::~Intern ()
{
	std::cout << "Destructor Intern\n";
}

/*--------------------------------------------------------*/
Intern & Intern::operator = (const Intern &a)
{
	(void)a;
	std::cout << "Copy Assignement Constructor Intern\n";
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target) const
{
	int Forms[3] = {formName.compare("Presidential Pardon"),
					formName.compare("Robotomy Request"),
					formName.compare("Shrubbery Creation")};
						
	AForm *PtrForms;
    int FindOrNot = -1;
    for (int i = 0; i < 3; i++)
    {
        if (Forms[i] == 0)
        {
            FindOrNot = i;
            break;
        }
    }
    switch (FindOrNot)
    {
        case 0:
           	PtrForms = new PresidentialPardonForm(target);
            break;
        case 1:
           	PtrForms = new PresidentialPardonForm(target);
            break;
        case 2:
           	PtrForms = new PresidentialPardonForm(target);
            break;
        default:
			throw Intern::FormNotFound();
            break;
    }

	std::cout << "Intern creates " << formName << "\n";
	return (PtrForms);
}
