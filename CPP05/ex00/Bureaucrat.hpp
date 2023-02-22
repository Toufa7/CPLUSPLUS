#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat
{
    private:

        const std::string   _name;
        int                 _grade;

    public:

        Bureaucrat ();
        Bureaucrat (std::string name, int grade);
        Bureaucrat (const Bureaucrat &a);
        ~Bureaucrat ();
        Bureaucrat & operator = (const Bureaucrat &a);

        int getGrade() const
        {
            return (this->_grade);
        }   

        std::string getName() const
        {
            return (this->_name);
        }

        void    incGrade()
        {
            this->_grade++;
            if (_grade > 150)
                throw Bureaucrat::GradeTooLowException();
        }
    
        void    decGrade()
        {
            this->_grade--;
            if (_grade < 1)
                throw Bureaucrat::GradeTooHighException();
        }

        class GradeTooHighException : public std::exception
        {
            const char* what() const throw()
            {
                return ("Grade Too High Exception\n");
            }
        };

        class GradeTooLowException : public std::exception
        {
            const char* what() const throw()
            {
                return ("Grade Too Low Exception\n");
            }
        };
    
};

std::ostream & operator << (std::ostream & OstreamObject, Bureaucrat const & Obj);

#endif