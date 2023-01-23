Constructor is a special membre funciton:

    Whenever an object is created the constructor extecuted

    Used when initialized a Class

    Have the same name as class and does not return any values

Default Constructor :

    A constructor that takes no arguments and initializes the object with default values.
    
Parameterized constructor :

    A constructor that takes one or more arguments and initializes the object with specific values

    Used when we want to initilizes an object with specific values

Copy constructor :

    Is a constructor that takes an object of the same class as its argument and creates a new object that is an exact copy of the original object

A reference is a way to give another name to a varibale so when you make changes to the varibale through
that reference the original varibale is also changed

Pointer to function :

The syntax for declaring a pointer to a member function is as follows:

    return_type (ClassName::*pointer_name)(argument_list);
    
In order to call the member function through a pointer, the following syntax is used:

    (object.*pointer)(arguments); OR (this.*pointer)(arguments);
    
 
When you try to output the address of a function pointer using the standard streams like "std::cout"

it will be treated as boolean value (1 | 0)

Solution we can use cast : 
    
    std::cout << (void *)&function;

    std::cout << (uintptr_t *)&function; 
