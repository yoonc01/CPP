#include <iostream>
#include <string>


int	main(void)
{
	std::string	var = "HI THIS IS BRAIN";
	std::string *ptr = &var;
	std::string	&ref = var;

	std::cout << &var << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl << std::endl;

	std::cout << var << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl << std::endl;

	return (0);
}