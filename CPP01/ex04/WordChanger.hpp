#ifndef WORDCHANGER_HPP
# define WORDCHANGER_HPP

#include <iostream>
#include <string>

class	WordChanger
{
	private:
		std::string	_totalStr;

	public:
		WordChanger();
		WordChanger(std::string totalStr);
		~WordChanger();

		void		setTotalStr(std::string str);
		std::string	changeWord(const std::string &s1, const std::string &s2);

};

#endif