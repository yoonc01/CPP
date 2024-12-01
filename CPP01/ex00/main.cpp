#include <iostream>
#include "Zombie.hpp"

//#include <cstdio>

//void	a()
//{
//	system("leaks --list zombie");
//}

int	main(void)
{
	Zombie	*zombie;

//	atexit(a);
	zombie = newZombie("hahahaha");
	zombie->announce();
	std::cout << std::endl;

	randomChump("randomChump");
	std::cout << std::endl;

	delete zombie;
	std::cout << std::endl;
	return (0);
}