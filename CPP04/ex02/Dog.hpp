#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain*	_brain;

	public:
		Dog();
		Dog(const Dog& obj);
		Dog&	operator=(const Dog& obj);
		~Dog();
		
		void	makeSound() const;
		Brain*	getBrain() const;
};

#endif