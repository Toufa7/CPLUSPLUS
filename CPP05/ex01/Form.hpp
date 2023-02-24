#ifndef FORM_H
#define FORM_H

#define SIGNED      1       
#define NOTSIGNED   0

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:

        const std::string   _name;
        const int           _signedGrade;
        const int           _executeGrade;
        bool                _signStatus;

    public:

        Form ();
        Form (const Form &a);
        Form (int grade);
        ~Form ();
        Form & operator = (const Form &a);

        std::string getName() const;

        bool getSign() const;

        int  getSignGrade() const;

        int executeGrade() const;


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
        
        void    beSigned(Bureaucrat const & obj);
};

std::ostream & operator << (std::ostream & OstreamObject, Form const & Obj);


#endif

