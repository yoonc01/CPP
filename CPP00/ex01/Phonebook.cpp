#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook() : _idx(0) {}

Phonebook::~Phonebook () {}

int	Phonebook::getIdx() const
{
	return (_idx);
}

void	Phonebook::addContact(Contact& contact)
{
	_contacts[_idx] = contact;
	_idx = (_idx + 1) % MAXIDX;
}

void Phonebook::searchContact(int idx)
{
	if (idx < 0 || idx >= MAXIDX)
		std::cerr << "Error: Out of index range." << std::endl;
	else if (_contacts[idx].getRegistered() == false)
		std::cerr << "Idx " << idx << " is not registered yet." << std::endl;
	else
		_contacts[idx].printLong();
}

void	Phonebook::printAllContact(void)
{
	std::cout << "\n     index|first name| last name|  nickname" << std::endl;
	for (int idx = 0; idx < MAXIDX; idx++)
	{
		if (_contacts[idx].getRegistered())
		{
			std::cout << "         " << idx << "|";
			_contacts[idx].printShort();
		}
	}
}