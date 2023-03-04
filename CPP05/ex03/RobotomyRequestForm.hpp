#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include <iostream>
#include "./AForm.hpp"

class RobotomyRequestForm : public AForm 
{
    private:
    
        std::string _target;

    public:
        RobotomyRequestForm (std::string target);
        RobotomyRequestForm (const RobotomyRequestForm &a);
        ~RobotomyRequestForm ();
        RobotomyRequestForm & operator = (const RobotomyRequestForm &a);

        void execute(Bureaucrat const &executor) const;

};

#endif

