#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << _type << " constructor" << std::endl;
}

Cat::Cat(const Cat& obj): Animal(obj.getType())
{
	std::cout << _type << " copy constructor" << std::endl;
}

Cat&	Cat::operator=(const Cat& obj)
{
	if (this != &obj)
		_type = obj.getType();
	std::cout << _type << " copy assignment operator" << std::endl;
	return ((*this));
}

Cat::~Cat()
{
	std::cout << _type << " destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}