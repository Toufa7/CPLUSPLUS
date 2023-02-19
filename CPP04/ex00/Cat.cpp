#include "Cat.hpp"

Cat::Cat (std::string name)
{
	this->type = name;
	std::cout << "Parametrized Constructor Cat\n";
}

Cat::Cat ()
{
		std::cout << "Default Constructor Cat\n";
}

Cat::Cat (const Cat &a)
{
		this->type = a.type;
}

Cat::~Cat()
{
		std::cout << "Destructor Cat\n";
}

Cat & Cat::operator = (const Cat &a)
{
		this->type = a.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "I'm " << this->type << " I Meow\n";
}
