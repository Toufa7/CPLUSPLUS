#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat () : _name("Government"), _grade(150)
{
	std::cout << "Default Constructor Bureaucrat\n";
}

/*--------------------------------------------------------*/

Bureaucrat::Bureaucrat (const Bureaucrat &a)
{
	// this->operator=(a);
	*this = a;
	std::cout << "Copy Constructor Bureaucrat\n";
}

// /*--------------------------------------------------------*/

Bureaucrat::Bureaucrat (std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();	
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
	std::cout << "Paramtrized Constructor Bureaucrat\n";
}

// /*--------------------------------------------------------*/

Bureaucrat::~Bureaucrat ()
{
	std::cout << "Destructor Bureaucrat\n";
}

/*--------------------------------------------------------*/
Bureaucrat & Bureaucrat::operator = (const Bureaucrat &a)
{
	this->_grade = a._grade;

	std::cout << "Copy Assignement Constructor Bureaucrat\n";
	return (*this);
}

std::ostream & operator << (std::ostream & OstreamObject, Bureaucrat const & Obj)
{
    OstreamObject << Obj.getName() << " Bureaucrat Grade " <<  Obj.getGrade() << std::endl;
    return (OstreamObject);
}

void    Bureaucrat::decGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void    Bureaucrat::incGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

void    Bureaucrat::signAForm(AForm & BuAForm) const
{
	try
	{
		BuAForm.beSigned(*this);
		std::cout << _name << " \033[1;32mSigned\033[0m "  << BuAForm.getName() << "\n"; 
	}
	catch (const std::exception& e)
	{
		std::cout << _name << " \033[1;31mcouldn’t sign\033[0m " << BuAForm.getName() << " because grade too low\n" ; 
	} 
}