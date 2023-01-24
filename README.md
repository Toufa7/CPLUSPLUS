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
  
  ## Benefits :


  ## Example :
  
   <p align="center">
    <img = src="imgs/overloading.png" width="1000"/>
   </p>
