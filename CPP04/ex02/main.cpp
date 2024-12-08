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
		AAnimal *animals[6];

		std::cout << "\n### DOG" << std::endl;
		animals[0] = new Dog();
		animals[1] = new Dog(*(dynamic_cast<Dog*>(animals[0])));
		animals[2] = new Dog();
		*(dynamic_cast<Dog*>(animals[2])) = *(dynamic_cast<Dog*>(animals[0]));
		
		std::cout << "\n### CAT" << std::endl;
		animals[3] = new Cat();
		animals[4] = new Cat(*(dynamic_cast<Cat*>(animals[3])));
		animals[5] = new Cat();
		*(dynamic_cast<Cat*>(animals[5])) = *(dynamic_cast<Cat*>(animals[3]));

		std::cout << "\n### makeSound" << std::endl;
		for (int i = 0; i < 6; i++)
			animals[i]->makeSound();

		std::cout << "\n### delete" << std::endl;
		for (int i = 0; i < 6; i++)
			delete animals[i];
	}

	return 0;
}