#include <iostream>
#include <sstream>
#include <string>
#include "Contact.hpp"
#include "Phonebook.hpp"

static std::string trim(const std::string& str)
{
	unsigned long start;
	unsigned long end;

	start = 0;
	while (start < str.length() && std::isspace(str[start]))
		start++;
	end = str.length();
	while (end > start && std::isspace(str[end - 1]))
		end--;
	return (str.substr(start, end - start));
}

static bool	isStrNotPrintable(const std::string &str)
{
	for (unsigned long i = 0; i < str.length(); i++)
		if (str[i] < 32 || str[i] > 126)
			return (true);
	return (false);
}

static bool isValidInput(const std::string &str)
{
	std::string trimed_str = trim(str);
	if (trimed_str == "")
		return (false);
	else if (isStrNotPrintable(trimed_str))
		return (false);
	return (true);
}

static std::string returnValidInput(std::string statement)
{
	std::string input;

	while (true)
	{
		std::cout << statement;
		std::getline(std::cin, input);
		if (isValidInput(input))
			return input;
		std::cerr << statement.substr(0, statement.size() - 2) + " cannot be empty." << std::endl;
	}
}

static void	add(Phonebook& pb)
{
	std::string input;
	Contact		ct;

	std::cout << "\nAdd new contact on #" << pb.getIdx() << std::endl;
	ct.setFirstName(returnValidInput("First name: "));
	ct.setLastName(returnValidInput("Last name: "));
	ct.setNickName(returnValidInput("Nick name: "));
	ct.setPhoneNumber(returnValidInput("Phone number: "));
	ct.setSecret(returnValidInput("Secret: "));
	ct.setRegistered(true);
	pb.addContact(ct);
}
static void	search(Phonebook& pb)
{
	std::string	input;
	int			idx;

	pb.printAllContact();
	while(true)
	{
		input = returnValidInput("Index: ");
		std::istringstream iss(input);
		if (!(iss >> idx))
		{
			std::cerr << "Input is not a valid integer." << std::endl;
			break;
		}
		else
		{
			pb.searchContact(idx);
			break;
		}
	}
}

int	main(int ac, char **av)
{
	std::string	input;
	Phonebook	pb;

	if (ac > 1)
	{
		std::cout << "Usage: " << av[0] << std::endl;
		return (1);
	}
	std::cout << "Welcome!" << std::endl;
	while (true)
	{
		std::cout << "\nSelect the command (Add, Search, Exit): ";
		std::getline(std::cin, input);

		if (input == "Add")
			add(pb);
		else if (input == "Search")
			search(pb);
		else if (input == "Exit")
			break;
		else
			std::cerr << "Invalid command" << std::endl;
	}
	return (0);
}
