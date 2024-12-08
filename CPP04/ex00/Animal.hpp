#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& obj);
		virtual	~Animal();
		Animal&	operator=(const Animal& obj);

		virtual void	makeSound() const;
		const std::string&	getType() const;
};

#endif