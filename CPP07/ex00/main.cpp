#include "whatever.hpp"
#include <iostream>

int main(void) {
	std::cout << "subject test\n";
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	hyoyoon::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << hyoyoon::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << hyoyoon::max(a, b) << std::endl;
	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	hyoyoon::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << hyoyoon::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << hyoyoon::max(c, d) << std::endl;
	return 0;
}