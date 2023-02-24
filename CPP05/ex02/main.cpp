#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    ShrubberyCreationForm A("TargetA");
    RobotomyRequestForm B("TargetB");
    PresidentialPardonForm C("TargetC");

    Bureaucrat D("Nacho", 150);

    try
    {
        A.execute(D);
        B.execute(D);
        C.execute(D);
    }
    catch (const std::exception& e)
    {
        std::cout << "Camera Wowo\n";
    }

}