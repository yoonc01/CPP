#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class	Contact
{
	public:
		Contact();
		~Contact();

		void	setFirstName(const std::string& firstName);
		void	setLastName(const std::string& lastName);
		void	setNickName(const std::string& nickName);
		void	setPhoneNumber(const std::string& phoneNumber);
		void	setSecret(const std::string& secret);
		
		void	setRegistered(const bool registered);
		bool	getRegistered() const;

		void	printShort() const;
		void	printLong() const;

	private:
		static std::string	truncate(const std::string& str, unsigned long maxLength = 10);

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string _secret;
		bool		_registered;
};

# endif