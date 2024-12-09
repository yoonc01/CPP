#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat constructor" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& obj): AAnimal(obj)
{
	std::cout << "Cat copy constructor" << std::endl;
	_brain = new Brain(*(obj.getBrain()));
}

Cat&	Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		AAnimal::operator=(obj);
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