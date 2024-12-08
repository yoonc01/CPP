#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal
{
	protected:
		AAnimal();
		AAnimal(const AAnimal& obj);
		AAnimal(const std::string& type);
		AAnimal&	operator=(const AAnimal& obj);
		std::string	_type;
	
	public:
		virtual				~AAnimal();
		virtual void		makeSound() const = 0;
		const std::string&	getType() const;
};

#endif