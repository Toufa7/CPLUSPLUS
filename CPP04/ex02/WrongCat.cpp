#include "WrongCat.hpp"


WrongCat::WrongCat ()
{
	std::cout << "Default Constructor WrongCat\n";
}

/*--------------------------------------------------------*/
WrongCat::WrongCat (const WrongCat &a)
{
	this->type = a.type;
	std::cout << "Copy Constructor WrongCat\n";
}

/*--------------------------------------------------------*/
WrongCat::~WrongCat ()
{
	std::cout << "Destructor WrongCat\n";
}

/*--------------------------------------------------------*/
WrongCat & WrongCat::operator = (const WrongCat &a)
{
	this->type = a.type;
	std::cout << "Copy Assignement Constructor WrongCat\n";
	return (*this);
}

