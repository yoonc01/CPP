#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& obj): Animal(obj.getType())
{
	std::cout << "Cat copy constructor" << std::endl;
	_brain = new Brain(*(obj.getBrain()));
}

Cat&	Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		_type = obj.getType();
		*_brain = *(obj.getBrain());
	}
	std::cout << "Cat copy assignment operator" << std::endl;
	return ((*this));
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (_brain);
}