#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat () : _name("Coyg"), _grade(150)
{
	std::cout << "Def\n";
}

/*--------------------------------------------------------*/
Bureaucrat::Bureaucrat (const Bureaucrat &a)
{
	// this->operator=(a);
	*this = a;
	std::cout << "Copy\n";
}

// /*--------------------------------------------------------*/

Bureaucrat::Bureaucrat (std::string name, int grade) : _name(name)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();	
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

// /*--------------------------------------------------------*/

Bureaucrat::~Bureaucrat ()
{
	std::cout << "Des\n";
}

/*--------------------------------------------------------*/
Bureaucrat & Bureaucrat::operator = (const Bureaucrat &a)
{
	this->_grade = a._grade;

	std::cout << "Assig\n";
	return (*this);
}


std::ostream & operator << (std::ostream & OstreamObject, Bureaucrat const & Obj)
{
    OstreamObject << Obj.getName() << " bureaucrat grade " <<  Obj.getGrade() << std::endl;
    return (OstreamObject);
}
