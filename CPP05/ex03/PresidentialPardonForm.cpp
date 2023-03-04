#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (std::string target) : AForm(25, 5)
{
	_target = target;
	std::cout << "Default Constructor PresidentialPardonForm\n";
}

/*--------------------------------------------------------*/
PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &a)
{
	this->operator=(a);
	std::cout << "Copy Constructor PresidentialPardonForm\n";
}

/*--------------------------------------------------------*/
PresidentialPardonForm::~PresidentialPardonForm ()
{
	std::cout << "Destructor PresidentialPardonForm\n";
}

/*--------------------------------------------------------*/
PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &a)
{
	_target = a._target;
	std::cout << "Copy Assignement Constructor PresidentialPardonForm\n";
	return (*this);
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getSignGrade() && executor.getGrade() > this->getExecuteGrade())
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
	}
	else
		throw::AForm::GradeTooHighException();
}


