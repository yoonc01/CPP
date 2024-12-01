#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAXIDX 8

#include <string>
#include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();

		int		getIdx() const;
		void	searchContact(int idx);
		void	addContact(Contact& contact);
		void	printAllContact();
	private:
		Contact		_contacts[MAXIDX];
		int			_idx;
};

#endif