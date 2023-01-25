Hi 👋 and welcome to my GitHub repository!
I am excited to share my journey of learning C++ with you.
I hope you will find the information and resources in this repository helpful.
Thank you for taking the time to check it out!

# Table of Contents  
  * [OOP](#oop)
    * [Example](#example)
  * [Namespace](#namespace)
    * [Example](#example)
  * [Operator Overloading](#operator-overloading)  
    * [Example](#example)

# OOP

## Let's start by defining what's a Class ????

A class in C++ is a blueprint (بلان) for creating objects (a particular data structure) :

  - Providing initial values for state (member variables or attributes)
  
  - Implementations of behavior (member functions or methods)
  
  A class can be used to define an object and its behavior.
  
  In short classess in C++ provide a way to bundle (جمع" بحال شي ربطة ههه") (Member Variables and Functions) into a single unit called class
  
  This helps to organize and structure your code making it easy to develop, maintain and understand.
  
  Classes also because they can create objects that can store state and provide behavior which can be used to model real world problems in a program

  Additionally, classes can be reused to create new objects without having to redefine their properties and behavior each time.

## Why do we need OOP ?

  - Encapsulation : OOP allows member functions and variables to operate into single unit called Class (This allows the developer )
  
  ## Example

  <p>
  <img src="imgs/oop_example1.png" width="700" />
  </p>
  
So using Encapsulation the class "Car" provides a way to encapsulate all of the data and the functions into a single unit called Class

Ofc other parts of the program can interact with the class as well by calling the member function

And they don't need to know the implementaion of the class (Ex: How the speed increase and decrease ... )

 
  <p>
  <img src="imgs/oop_example2.png" width="700" />
  </p>
  
We can hide the implementation details of how the balance is updated and the validations are done inside the class

And the users of the class can just interact with the class using the deposit and withdraw functions without the need to know how the balance is updated.

> The encapsulation helps to make the code more readable, maintainable and less prone to bugs by limiting the exposure of the implementation details to the other parts of the code.
  
  - Inheritance : OOP allows a new class to inherit the proprties and methods of an existing class, reducing the amount of repetitive code also this allows for the creation of a hierarchy of classes, where a subclass can inherit from a superclass and add or override methods as needed.


  ### Example

  <p>
  <img src="imgs/inheritance_1.png" width="700"/>
  </p>
  
Let's consider the class "Mouse" that has method called "move()" and member variables like "name" and "weight"

  <p>
  <img src="imgs/inheritance_2.png" width="700"/>
  </p>

We create a subclass called "Parrot" that inherits from the "Mouse" class and add new methods or override existing methods

Then the class "Parrot" have a new method called "speak()" and variable member "color".

> The inheritance allows for creating a hierarchy of classes, where a subclass can inherit the properties and methods of its superclass, and then add or override methods as needed. This can make the code more organized and reusable, and it makes it easier to understand the relationships between classes in the program.

 
# Namespace

  ## Definition :
  
  Namespaces are defined using the keyword namespace, and can contain :
  
  - Variables
  - Functions
  - Classes
  - and other namespaces.
  
Once a namespace is defined, its elements can be accessed using the scope resolution operator (::)

  ## Benefits :

  Namespaces provide a way to organize code, prevent naming conflicts, and improve code reuse, readability, and maintainability.

  ## Example
 
  <p align="center">
    <img src="imgs/namespace.png" width="1000"/>
  </p>

# Operator Overloading

  ## Definition :  
  
  Operator (a symbol to perform mathematical and logical computations) overloading is a feature in C++ that allows you to redefine the way operators such as +, -, *, etc, work for user-defined data types such as classes and structs ()
 By making theses operator to work on used defined data types such as class, structs 
  
  :information_source: When the compiler found an operator in your code, it first checks if that operator has been overloaded for the specific data types it is working with : 
  
  - If it has, the compiler will use the overloaded version of the operator.
  - If it hasn't, the compiler will use the default behavior of the operator for the data types in question.

So the compiler needs to handle that operator based on whether it has been overloaded or not.


  ## Types :
  
   - Function Overloading : When 2 functions have the same name but with a diffrent number or type of arguments.
   - Operator Overloading : ...
  
  ℹ️ : Good Practice: Remembre to passed the arguments as const refrence to ensure that the membre function cannot modify the object being passed
  
  ## Advantages and Disadvantages :

  ### Advantages :
 
  - Simplicity: Operator overloading can simplify the code by reducing the need for verbose function calls, it makes the code more elegant and readable.

  <p align="center">
    <img src="imgs/readable_code.png" width="1000"/>
  </p>
  
  As you can see, in the second example the code is more elegant and readable, the operation is simple and intuitive, and it doesn't need to call a function, it's clear that we are adding two objects together

    
  ### Disadvantages :
  
  - New operators can't be overloaded only pre-existing operators can be overloaded.
  - Arity (Nbr of inputs) of the operators can not be changed. For example, the "+" operator can take only two inputs, like 5 + 2. So you can not use it to add three numbers like (a + b + c) meaning that the expression a + b + c is interpreted as (a + b) + c
  
  
  
  ## Syntax :
  
  <p>
  <img src="imgs/Syntax_overloading.png" width="1000"/>
  </p>
 
  ## Example
  
   <p align="center">
    <img = src="imgs/overloading.png" width="1000"/>
   </p>
