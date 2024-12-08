#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << _type << " constructor" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& obj): AAnimal(obj.getType())
{
	std::cout << _type << " copy constructor" << std::endl;
	_brain = new Brain(*(obj._brain));
}

Dog&	Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		_type = obj.getType();
		*_brain = *(obj._brain);
	}
	std::cout << _type << " copy assignment operator" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << _type << " destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}