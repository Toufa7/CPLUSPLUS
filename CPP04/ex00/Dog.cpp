#include "Dog.hpp"

Dog::Dog (std::string name)
{
	this->type = name;
	std::cout << "Parametrized Constructor Dog\n";
}

Dog::Dog()
{
        std::cout << "Default Constructor Dog\n";
}

Dog::Dog(const Dog &a)
{
	this->type = a.type;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog\n";
}

Dog &Dog::operator=(const Dog &a)
{
	this->type = a.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "I'm " << this->type << " I Bark\n";
}
