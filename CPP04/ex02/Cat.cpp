#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << _type << " constructor" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& obj): AAnimal(obj.getType())
{
	std::cout << _type << " copy constructor" << std::endl;
	//how about making getter brain
	_brain = new Brain(*(obj._brain));
}

Cat&	Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		_type = obj.getType();
		*_brain = *(obj._brain);
	}
	std::cout << _type << " copy assignment operator" << std::endl;
	return ((*this));
}

Cat::~Cat()
{
	delete _brain;
	std::cout << _type << " destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}