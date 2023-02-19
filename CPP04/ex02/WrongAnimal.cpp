#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ()
{
	std::cout << "Default Constructor WrongAnimal\n";
}

/*--------------------------------------------------------*/
WrongAnimal::WrongAnimal (const WrongAnimal &a)
{
	this->type = a.type;
	std::cout << "Copy Constructor WrongAnimal\n";
}

/*--------------------------------------------------------*/
WrongAnimal::~WrongAnimal ()
{
	std::cout << "Destructor WrongAnimal\n";
}

/*--------------------------------------------------------*/
WrongAnimal & WrongAnimal::operator = (const WrongAnimal &a)
{
	this->type = a.type;
	std::cout << "Copy Assignement Constructor WrongAnimal\n";
	return (*this);
}

void    WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal ??\n";
}
