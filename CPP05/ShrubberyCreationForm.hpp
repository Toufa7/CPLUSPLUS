#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include "./AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm 
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm (std::string target);
        ShrubberyCreationForm (const ShrubberyCreationForm &a);
        ~ShrubberyCreationForm ();
        ShrubberyCreationForm & operator = (const ShrubberyCreationForm &a);

        void execute(Bureaucrat const &executor) const;
};

#endif

