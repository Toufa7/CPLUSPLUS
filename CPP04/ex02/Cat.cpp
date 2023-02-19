#include "Cat.hpp"

Cat::Cat (std::string name)
{
	this->type = name;
	CatBrain = new Brain();
	std::cout << "Parametrized Constructor Cat\n";
}

Cat::Cat ()
{
	CatBrain = new Brain();
	std::cout << "Default Constructor Cat\n";
}

Cat::Cat (const Cat &a)
{
	*this = a;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat\n";
	delete CatBrain;
}

Cat & Cat::operator = (const Cat &a)
{
	this->CatBrain = new Brain();
	this->type = a.type;
	for (size_t i = 0; i < 100; i++)
		this->CatBrain[i] = a.CatBrain[i];
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "I'm " << this->type << " I Meow\n";
}
