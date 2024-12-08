#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_isGateKeeperMode = 0;
	std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_isGateKeeperMode = 0;
	std::cout <<  "ScavTrap parameterized constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
    : ClapTrap(obj), _isGateKeeperMode(obj._isGateKeeperMode)
{
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout <<  "ScavTrap destructor called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap copy assignment operator constructor called!" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._energyPoints;
		_attackDamage = obj._attackDamage;
		_isGateKeeperMode = obj._isGateKeeperMode;
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " can't move." << std::endl;
		return ;
	}
	if (_isGateKeeperMode == 1)
	{
		std::cout << "ScavTrap " << _name << " is already in Gatekeeper mode" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " has entered Gatekeeper mode" << std::endl;
	_isGateKeeperMode = 1;
	_energyPoints--;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target
			<< ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ScavTrap " << _name << " can't move." << std::endl;
}

void	ScavTrap::printInfo() const
{
	std::cout << "ScavTrap " << _name << " has " << _hitPoints
		<< " hit points, " << _energyPoints << " energy points, "
		<< _attackDamage << " attack damage, and is in"
		<< (_isGateKeeperMode ? " gatekeeper" : " normal") << " mode!" << std::endl;
}
