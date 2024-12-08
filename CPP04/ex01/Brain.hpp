#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain& obj);
		Brain&	operator=(const Brain& obj);
		~Brain();

		const std::string&	getIdea(const int idx) const;
		void	setIdea(const int idx, const std::string& idea);
};

#endif