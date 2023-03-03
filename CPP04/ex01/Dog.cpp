#include "Dog.hpp"

Dog::Dog (std::string name)
{
	this->type = name;
	DogBrain = new Brain();
	std::cout << "Parametrized Constructor Dog\n";
}

Dog::Dog()
{
	DogBrain = new Brain();
    std::cout << "Default Constructor Dog\n";
}

Dog::Dog(const Dog &a)
{
	this->operator=(a);
}

Dog::~Dog()
{
	delete DogBrain;
	std::cout << "Destructor Dog\n";
}

Dog &Dog::operator = (const Dog &a)
{
	this->DogBrain = new Brain();
	this->type = a.type;
	for (size_t i = 0; i < 100; i++)
		this->DogBrain[i] = a.DogBrain[i];
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "I'm " << this->type << " I Bark\n";
}
