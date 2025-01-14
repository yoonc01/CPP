#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate(void) {
	static bool isInitialized = false;

	if (!isInitialized) {
		std::srand(static_cast<unsigned int>(std::time(0)));
		isInitialized = 1;
	}

	switch (std::rand() % 3) {
	case 0:
		std::cout << "Generated: A" << std::endl;
		return (new A);
	case 1:
		std::cout << "Generated: B" << std::endl;
		return (new B);
	case 2:
		std::cout << "Generated: C" << std::endl;
		return (new C);
	}
	return (NULL);
}

void identify(Base* p) {
	if (p == NULL)
	{
		std::cout << "Null pointer cannot identify type." << std::endl;
		return ;
	}

	if (dynamic_cast<A*>(p)) {
		std::cout << "pointer of A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "pointer of B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "pointer of C" << std::endl;
	} else {
		std::cout << "Unknown type" << std::endl;
	}
}

template <typename T>
bool	tryCastAndPrint(Base& p, const std::string typeName)
{
	try {
		(void) dynamic_cast<T&>(p);
		std::cout << "reference of " << typeName << std::endl;
		return (true);
	} catch(const std::exception& e) {
		return false;
	}
}

void identify(Base& p) {
	if (tryCastAndPrint<A>(p, "A")) return ;
	if (tryCastAndPrint<B>(p, "B")) return ;
	if (tryCastAndPrint<C>(p, "C")) return ;
	std::cout << "Unknown type" << std::endl;

}

int main() {
	Base* first = generate();
	Base* second = generate();
	Base* third = generate();
	Base* four = new Base();

	std::cout << std::endl;
	identify(first);
	identify(second);
	identify(third);
	identify(four);

	std::cout << std::endl;
	identify(*first);
	identify(*second);
	identify(*third);
	identify(*four);

	std::cout << std::endl;
	delete first;
	delete second;
	delete third;
	delete four;
	std::cout << std::endl;
	return (0);
}