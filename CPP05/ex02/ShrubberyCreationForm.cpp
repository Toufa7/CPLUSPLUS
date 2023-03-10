#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm (std::string target) : AForm(145, 137)
{
	_target = target;
        std::cout << "Default Constructor ShrubberyCreationForm\n";
}

/*--------------------------------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &a)
{
	this->operator=(a);
	std::cout << "Copy Constructor ShrubberyCreationForm\n";
}

/*--------------------------------------------------------*/
ShrubberyCreationForm::~ShrubberyCreationForm ()
{
	std::cout << "Destructor ShrubberyCreationForm\n";
}

/*--------------------------------------------------------*/
ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &a)
{
	_target = a._target;
        std::cout << "Copy Assignement Constructor ShrubberyCreationForm\n";
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= this->getSignGrade() && executor.getGrade() <= this->getExecuteGrade())
	{
		std::cout << this->_target << " Create a beautiful tree\n";
		std::ofstream	output;
		output.open((this->_target) + "_shrubbery");
		output << "       _-_       \n";
		output << "    /~~   ~~\\       \n";
		output << " /~~         ~~\\       \n";
		output << "{               }       \n";
		output << " \\  _-     -_  /       \n";
		output << "   ~  \\ //  ~       \n";
		output << "      | |       \n";
		output << "      | |       \n";
		output << "      // \\       \n";
		output.close();
	}
	else
		throw::AForm::GradeTooHighException();

}
