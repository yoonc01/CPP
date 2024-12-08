#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "ClapTrap copy constructor called!" << std::endl;
    *this = obj;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called!" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "ClapTrap copy assignment operator constructor called!" << std::endl;
    if (this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;
        _attackDamage = obj._attackDamage;
    }
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
       std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
       _energyPoints--;
    }
    else
        std::cout << "ClapTrap " << _name << " can't move." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        if (_hitPoints > amount)
            _hitPoints = _hitPoints - amount;
        else
            _hitPoints = 0;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " cannot take damage because it's already out of hit points!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount << " hit points!" << std::endl;
        _energyPoints--;
        _hitPoints = _hitPoints + amount;
    }
    else
        std::cout << "ClapTrap " << _name << " can't move." << std::endl;
}

void    ClapTrap::printInfo() const
{
    std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit points, " << _energyPoints
    << " energy points, and " << _attackDamage << " attack damage!" << std::endl;
}

std::string ClapTrap::getName() const
{
    return (_name);
}

unsigned int    ClapTrap::getAttackDamage() const
{
    return (_attackDamage);
}