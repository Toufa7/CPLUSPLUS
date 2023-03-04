#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class AForm;

class Intern
{
    public:
        Intern ();
        Intern (const Intern &a);
        ~Intern ();
        Intern & operator = (const Intern &a);

        class FormNotFound : public std::exception
        {
            const char* what() const throw()
            { 
                return ("Form Not Found\n");
            }
        };

        AForm    *makeForm(std::string formName, std::string target) const;
};

#endif