#include <exception>
#include "WordChanger.hpp"

WordChanger::WordChanger() : _totalStr("") {}

WordChanger::WordChanger(std::string totalStr) : _totalStr(totalStr) {}

WordChanger::~WordChanger() {}

void	WordChanger::setTotalStr(std::string str)
{
	_totalStr = str;
}

std::string	WordChanger::changeWord(const std::string &s1, const std::string &s2)
{
	std::string::size_type n = 0;

	if (s1.empty())
		return (_totalStr);
	while (true)
	{
		n = _totalStr.find(s1, n);
		if (n == std::string::npos)
			break;
		_totalStr.erase(n, s1.length());
		_totalStr.insert(n, s2);
		n = n + s2.length();
	}
	return (_totalStr);
}
