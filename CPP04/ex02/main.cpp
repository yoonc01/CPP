#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		std::cout << "## Basic Test" << std::endl;
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;
		delete i;
	}

	{
		std::cout << "\n## Array Test" << std::endl;
		AAnimal *animals[4];

		std::cout << "\n### DOG" << std::endl;
		animals[0] = new Dog();
		animals[1] = new Dog();
		
		std::cout << "\n### CAT" << std::endl;
		animals[2] = new Cat();
		animals[3] = new Cat();

		std::cout << "\n### makeSound" << std::endl;
		for (int i = 0; i < 4; i++)
			animals[i]->makeSound();

		std::cout << "\n### delete" << std::endl;
		for (int i = 0; i < 4; i++)
			delete animals[i];
	}

	return (0);
}