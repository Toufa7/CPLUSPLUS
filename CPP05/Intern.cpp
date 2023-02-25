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

AForm *Inter::makeForm(std::string formName, std::string target) const
{
	int FindOrNot = -1;
	std::string Forms[3] = {"Presidential Pardon",
							"Robotomy Request",
							"Shrubbery Creation"};
	AForm *PtrForms[3] = { new PresidentialPardonForm(target),
							new RobotomyRequestForm(target),
							new ShrubberyCreationForm(target)};

	for (size_t i = 0; i < 3; i++)
	{
		if (formName == Forms[i])
			FindOrNot = i;
		else
			delete PtrForms[i];
	}

	if (FindOrNot == -1)
		throw Intern::FormNotFound();
	std::cout << "Intern creates " << formName << "\n";
	return (PtrForms[FindOrNot]);
}
