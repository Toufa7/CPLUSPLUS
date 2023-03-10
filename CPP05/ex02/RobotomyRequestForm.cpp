#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (std::string target)  : AForm(72, 45)
{
	_target = target;
	std::cout << "Default Constructor RobotomyRequestForm\n";
}

/*--------------------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &a)
{
	this->operator=(a);
	std::cout << "Copy Constructor RobotomyRequestForm\n";
}

/*--------------------------------------------------------*/
RobotomyRequestForm::~RobotomyRequestForm ()
{
	std::cout << "Destructor RobotomyRequestForm\n";
}

/*--------------------------------------------------------*/
RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &a)
{
	_target = a._target;
	std::cout << "Copy Assignement Constructor RobotomyRequestForm\n";
	return (*this);
}

void	ChoseString()
{
	srand(time(NULL));
	int choice = rand() % 2;
	if (choice == 0)
		std::cout << " has been robotomized successfully 50% of the time\n";
	else
		std::cout << " informs that the robotomy failed\n";
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= this->getSignGrade() && executor.getGrade() <= this->getExecuteGrade())
	{
		std::cout << "Makes some drilling noises\n";
		std::cout << this->_target;
		ChoseString();
	}
	else
		throw::AForm::GradeTooHighException();
}

