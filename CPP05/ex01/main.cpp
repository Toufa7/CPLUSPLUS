#include "Form.hpp"

int main(void)
{
    Form        A;
    Bureaucrat  valid("The Governor", 1);

    std::cout << A;
    std::cout << valid;

    valid.signForm(A);    

    Form        B("NewForm",1);
    Bureaucrat  invalid("The Nacho", 2);

    std::cout << B;
    std::cout << invalid;
    
    invalid.signForm(B);    
}