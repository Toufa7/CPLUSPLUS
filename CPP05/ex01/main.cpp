#include "Form.hpp"

int main(void)
{
    Form        A;

    Bureaucrat  valid("Cazorla", 50);
    std::cout << valid;
    A.beSigned(valid);
    valid.signForm(A);


    Form        B(60);
    Bureaucrat  invalid("Nacho", 50);
    std::cout << invalid;
    B.beSigned(invalid);
    invalid.signForm(B);
    b.exe(valid);
}