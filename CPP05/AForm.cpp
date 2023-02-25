#include "AForm.hpp"

AForm::AForm () :  _name("Santi"), _signedGrade(50), _executeGrade(125), _signStatus(NOTSIGNED)
{
	std::cout << "Default Constructor AForm\n";
}

AForm::AForm (int signedGrade, int executeGrade) : _name("Santi"), _signedGrade(signedGrade), _executeGrade(executeGrade)
{
	std::cout << "Parametrized Constructor AForm\n";
}

AForm::AForm (const AForm &a) : _name(a._name), _signedGrade(a._signedGrade), _executeGrade(a._executeGrade)
{
	_signStatus = a._signStatus;
	std::cout << "Copy Constructor AForm\n";
}

AForm::~AForm ()
{
	std::cout << "Destructor AForm\n";
}

AForm & AForm::operator = (const AForm &a)
{
	_signStatus = a._signStatus;
	std::cout << "Copy Assignement Constructor AForm\n";
	return (*this);
}

std::ostream & operator << (std::ostream & OstreamObject, AForm const & Obj)
{
	std::cout << "----------------------------\n";
    OstreamObject	<< "Name 		= "	<< Obj.getName() << std::endl
					<< "Sign		= "	<< Obj.getSign() << std::endl
					<< "Sign Grade	= "	<< Obj.getSignGrade() << std::endl
					<< "Execute Grade	= "	<< Obj.getExecuteGrade() << std::endl;
	std::cout << "----------------------------\n";
    return (OstreamObject);
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSign() const
{
	return (this->_signStatus);
}

int  AForm::getSignGrade() const
{
	return (this->_signedGrade);
}

int AForm::getExecuteGrade() const
{
	return (this->_executeGrade);
}

void    AForm::beSigned(Bureaucrat const & obj)
{
	if (obj.getGrade() < this->_signedGrade)
	{
		throw AForm::GradeTooLowException();
	}
	else
		this->_signStatus = SIGNED;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->_signedGrade  && executor.getGrade() > this->_executeGrade)
	{
		// Wow
	}
	else
		throw::AForm::GradeTooHighException();
}
