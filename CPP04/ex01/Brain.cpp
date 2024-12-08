#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Default";
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::copy(obj._ideas, obj._ideas + 100, _ideas);
	std::cout << "Brain copy constructor" << std::endl;
}

Brain&	Brain::operator=(const Brain& obj)
{
	if (this != &obj)
		std::copy(obj._ideas, obj._ideas + 100, _ideas);
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