#include <exception>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include "WordChanger.hpp"

void	saveResult(std::string result, std::string originalName, std::ifstream &ifs)
{
	std::ofstream	ofs(originalName.append(".replace").c_str());

	if (!ofs.is_open())
	{
		std::cerr << "Can't write result file!" << std::endl;
		ifs.close();
		exit(1);
	}
	ofs << result;
	ofs.close();
}

std::string	run(std::ifstream &ifs, std::string s1, std::string s2)
{
	WordChanger			wc;
	std::stringstream	buffer;
	std::string			totalStr;

	buffer << ifs.rdbuf();
	totalStr = buffer.str();
	wc.setTotalStr(totalStr);
	return (wc.changeWord(s1, s2));
}

int	main(int ac, char **av)
{
	std::ifstream	ifs(av[1]);
	std::string		result;

	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <fname> <s1> <s2>" << std::endl;
		return (1);
	}
	if (!ifs.is_open())
	{
		std::cerr << "Can't open " << av[1] << std::endl;
		return (1);
	}
	else
	{
		result = run(ifs, av[2], av[3]);
		saveResult(result, av[1], ifs);
		std::cout << "Done!" << std::endl;
		ifs.close();
	}
	return (0);
}