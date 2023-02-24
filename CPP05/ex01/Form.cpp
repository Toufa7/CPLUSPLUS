#include "Form.hpp"

Form::Form () :  _name("Santi"), _signedGrade(50), _executeGrade(125), _signStatus(NOTSIGNED)
{
	std::cout << "Default Constructor Form\n";
}

Form::Form (int grade) :  _name("Santi"), _signedGrade(grade), _executeGrade(125), _signStatus(NOTSIGNED)
{
	std::cout << "Parametrized Constructor Form\n";
}

Form::Form (const Form &a) : _name(a._name), _signedGrade(a._signedGrade), _executeGrade(a._executeGrade)
{
	_signStatus = a._signStatus;
	std::cout << "Copy Constructor Form\n";
}

Form::~Form ()
{
	std::cout << "Destructor Form\n";
}

Form & Form::operator = (const Form &a)
{
	_signStatus = a._signStatus;
	std::cout << "Copy Assignement Constructor Form\n";
	return (*this);
}

std::ostream & operator << (std::ostream & OstreamObject, Form const & Obj)
{
	std::cout << "----------------------------\n";
    OstreamObject	<< "Name 		= "	<< Obj.getName() << std::endl
					<< "Sign		= "	<< Obj.getSign() << std::endl
					<< "Sign Grade	= "	<< Obj.getSignGrade() << std::endl
					<< "Execute Grade	= "	<< Obj.executeGrade() << std::endl;
	std::cout << "----------------------------\n";
    return (OstreamObject);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSign() const
{
	return (this->_signStatus);
}

int  Form::getSignGrade() const
{
	return (this->_signedGrade);
}

int Form::executeGrade() const
{
	return (this->_executeGrade);
}

void    Form::beSigned(Bureaucrat const & obj)
{
	if (obj.getGrade() < this->_signedGrade)
	{
		throw Form::GradeTooLowException();
	}
	else
		this->_signStatus = SIGNED;
}