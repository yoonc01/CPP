#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Default";
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = obj.getIdea(i);
	std::cout << "Brain copy constructor" << std::endl;
}

Brain&	Brain::operator=(const Brain& obj)
{
	if (this != &obj)
		for (int i = 0; i < 100; i++)
			_ideas[i] = obj.getIdea(i);
	std::cout << "Brain copy assignment operator" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

const std::string&	Brain::getIdea(const int idx) const
{
	return (_ideas[idx]);
}

void	Brain::setIdea(const int idx, const std::string& idea)
{
	_ideas[idx] = idea;
}