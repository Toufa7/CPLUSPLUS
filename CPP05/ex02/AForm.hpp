#ifndef AForm_H
#define AForm_H

#define SIGNED      1       
#define NOTSIGNED   0

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:

        const std::string   _name;
        const int           _signedGrade;
        const int           _executeGrade;
        bool                _signStatus;

    public:

        AForm ();
        AForm (const AForm &a);
        AForm (int signedGrade, int executeGrade);
        ~AForm ();
        AForm & operator = (const AForm &a);

        std::string getName() const;

        bool getSign() const;

        int  getSignGrade() const;
        int  getExecuteGrade() const;

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
        virtual void    execute(Bureaucrat const & executor) const  = 0;
};

std::ostream & operator << (std::ostream & OstreamObject, AForm const & Obj);


#endif

