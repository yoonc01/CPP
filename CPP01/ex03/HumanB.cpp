#include <iostream>
#include <string>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_name(name), _weapon(nullptr) {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	if (_weapon == nullptr)
		std::cout << _name << " does not have any weapons" << std::endl;
	else
		std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	if (weapon == nullptr)
	{
		std::cerr << "Error: Attempted to set a null weapon for " << _name << std::endl;
		return ;
	}
	_weapon = weapon;
}