#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj.getType())
{
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	if (this != &obj)
		WrongAnimal::operator=(obj);
	std::cout << "WrongCat copy assignment operator" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meow Meow" << std::endl;
}