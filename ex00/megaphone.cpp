#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::string str = av[i];
		for (std::size_t j = 0; j < str.length(); j++)
			str[j] = static_cast<char>(std::toupper(str[j]));
		std::cout << str;
	}
	std::cout << '\n';
	return (0);
}
