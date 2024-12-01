#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact()
	: _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _secret("") {}

Contact::~Contact() {}

void	Contact::setFirstName(const std::string& firstName)
{
	_firstName = firstName;
}

void	Contact::setLastName(const std::string& lastName)
{
	_lastName = lastName;
}

void	Contact::setNickName(const std::string& nickName)
{
	_nickName = nickName;
}

void	Contact::setPhoneNumber(const std::string& phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void	Contact::setSecret(const std::string& secret)
{
	_secret = secret;
}

void	Contact::setRegistered(bool registered)
{
	_registered = registered;
}

bool	Contact::getRegistered() const
{
	return _registered;
}

std::string	Contact::truncate(const std::string& str, unsigned long maxLength)
{
	if (str.length() > maxLength)
		return (str.substr(0, maxLength - 1) + ".");
	return (str);
}

void	Contact::printShort() const
{
	std::cout << std::setw(10) << truncate(_firstName) << "|";
	std::cout << std::setw(10) << truncate(_lastName) << "|";
	std::cout << std::setw(10) << truncate(_nickName) << std::endl;
}

void	Contact::printLong() const
{
	std::cout << "First Name: " << _firstName << std::endl;
    std::cout << "Last Name: " << _lastName << std::endl;
    std::cout << "Nickname: " << _nickName << std::endl;
    std::cout << "Phone Number: " << _phoneNumber << std::endl;
    std::cout << "Secret: " << _secret << std::endl;
}