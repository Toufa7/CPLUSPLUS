#include <iostream>
#include <string>

int main()
{
    std::string nothing;
    std::string *stringPTR;

    nothing =  "HI THIS IS BRAIN";
    stringPTR = &nothing;
    // A reference variable is one that refers to the address of another variable
    // In C++, you can't declare a reference without initialization. You must initialize it.
    // This varibale can be used just like the original any changes made to this reference variable make on the original varibale as well
    std::string &stringREF = nothing;
    
    std::cout << std::endl;
    std::cout << "The memory address of the string variable :" << &nothing << std::endl;
    std::cout << "The memory address held by stringPTR      :" << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF      :" << &stringREF << std::endl;


    std::cout << std::endl;
    std::cout << "The value of the string variable  :       " << nothing << std::endl;
    std::cout << "The value pointed to by stringPTR :       " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF :       " << stringREF << std::endl;
}


