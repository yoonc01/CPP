#include <iostream>
#include "FragTrap.hpp"

int main()
{
	FragTrap A(std::string("A"));
	FragTrap B(std::string("B"));
	std::cout << std::endl;

	A.attack(B.getName());
	B.takeDamage(A.getAttackDamage());
	A.printInfo();
	B.printInfo();

	A.highFivesGuys();
	B.highFivesGuys();

	return (0);
}