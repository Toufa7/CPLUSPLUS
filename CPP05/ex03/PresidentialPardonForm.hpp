#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "./AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm 
{
    private:

        std::string _target;
        
    public:

        PresidentialPardonForm (std::string target);
        PresidentialPardonForm (const PresidentialPardonForm &a);
        ~PresidentialPardonForm ();
        PresidentialPardonForm & operator = (const PresidentialPardonForm &a);

        void execute(Bureaucrat const &executor) const;
};

#endif

