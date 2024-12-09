#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& obj): Animal(obj)
{
	std::cout << "Dog copy constructor" << std::endl;
	_brain = new Brain(*(obj.getBrain()));
}

Dog&	Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		*_brain = *(obj.getBrain());
	}
	std::cout << "Dog copy assignment operator" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (_brain);
}