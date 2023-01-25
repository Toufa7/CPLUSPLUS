# Namespace

  ## Definition :
  
  Namespaces are defined using the keyword namespace, and can contain :
  
  - Variables
  - Functions
  - Classes
  - and other namespaces.
  
Once a namespace is defined, its elements can be accessed using the scope resolution operator (::)

  ## Benifits :

  Namespaces provide a way to organize code, prevent naming conflicts, and improve code reuse, readability, and maintainability.

  ## Example :
 
  <p align="center">
    <img src="imgs/namespace.png" width="1000"/>
  </p>

# Operator Overloading :

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
 
  ## Example :
  
   <p align="center">
    <img = src="imgs/overloading.png" width="1000"/>
   </p>
