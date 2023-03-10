#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    // Sign 145, Exec 137
    ShrubberyCreationForm   A("TargetA");

    // Sign 72, Exec 45
    RobotomyRequestForm     B("TargetB");

    // Sign 25, Exec 5
    PresidentialPardonForm  C("TargetC");

    Bureaucrat D("Nacho", 5);

    try
    {
        A.execute(D);
        B.execute(D);
        C.execute(D);
    }
    catch (const std::exception& e)
    {
        std::cout << "\033[1;31mException Catched\033[0m\n";
        std::cerr << e.what();
    }
}