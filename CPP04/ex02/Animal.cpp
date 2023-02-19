#include "Animal.hpp"

Animal::Animal ()
{
	std::cout << "Default Constructor Animal\n";
}

Animal::Animal (const Animal &a)
{
	this->type = a.type;
}

Animal::~Animal ()
{
	std::cout << "Destructor Animal\n";
}

Animal & Animal::operator = (const Animal &a)
{
	this->type = a.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void    Animal::makeSound() const
{
	std::cout << "I'm an Animal no sound\n";
}