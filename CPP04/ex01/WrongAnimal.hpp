#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& obj);
		virtual	~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal& obj);

		void	makeSound() const;
		const std::string&	getType() const;
};

#endif