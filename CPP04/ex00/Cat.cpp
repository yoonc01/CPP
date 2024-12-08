#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat& obj): Animal(obj.getType())
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat&	Cat::operator=(const Cat& obj)
{
	if (this != &obj)
		Animal::operator=(obj);
	std::cout << "Cat copy assignment operator" << std::endl;
	return ((*this));
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}