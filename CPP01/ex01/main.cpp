#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	int	n = 5;
	Zombie	*horde;

	horde = zombieHorde(n, "haha");

	for (int i = 0; i < n; i++)
		horde[i].announce();
	
	delete[] horde;
	return (0);
}