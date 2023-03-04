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

        int getGrade() const; 

        std::string getName() const;

        void    incGrade();
    
        void    decGrade();

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