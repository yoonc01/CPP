#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog& obj): Animal(obj.getType())
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog&	Dog::operator=(const Dog& obj)
{
	if (this != &obj)
		Animal::operator=(obj);
	std::cout <<"Dog copy assignment operator" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}