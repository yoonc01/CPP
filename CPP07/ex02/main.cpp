#include "Array.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

#define ARRAY_SIZE 750

// leak check

int main() {
	{
		std::cout << "--Subject test\n";
		Array<int> numbers(ARRAY_SIZE);
		int* mirror = new int[ARRAY_SIZE];
		std::srand(std::time(NULL));
		for (int i = 0; i < ARRAY_SIZE; i++) {
			const int value = std::rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}
		for (int i = 0; i < ARRAY_SIZE; i++) {
			if (mirror[i] != numbers[i]) {
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}

		try {
			numbers[-2] = 42;
			std::cout << numbers[-2] << std::endl;
		} catch (const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			numbers[ARRAY_SIZE] = 42;
			std::cout << numbers[ARRAY_SIZE] << std::endl;
		} catch (const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		try {
			numbers[ARRAY_SIZE - 1] = 42;
			std::cout << numbers[ARRAY_SIZE - 1] << std::endl;
		} catch (const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		delete[] mirror;
	}

	{
		std::cout << "\n--Additional test\n";

		std::cout << "-constructor test\n";
		Array<int> arrNull;
		Array<int> arrZero(0);
		try {
			arrNull[0] = 1;
		} catch (const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		try {
			arrZero[0] = 1;
		} catch (const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		std::cout << "\n-basic test\n";
		Array<std::string> arr(5);
		arr[0] = "1st element";
		arr[1] = "2nd element";
		arr[2] = "3rd element";
		arr[3] = "4th element";
		arr[4] = "5th element";
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << std::endl;

		std::cout << "\n-copy constructor test\n";
		Array<std::string> copy(arr);
		for (unsigned int i = 0; i < copy.size(); i++)
			std::cout << copy[i] << std::endl;

		std::cout << "\n-copy assignment operator test\n";
		Array<std::string> copyOp;
		copyOp = copy;
		for (unsigned int i = 0; i < copyOp.size(); i++)
			std::cout << copyOp[i] << std::endl;

		std::cout << "\n-const test\n";
		const Array<std::string> arrConst(arr);
		for (unsigned int i = 0; i < arrConst.size(); i++)
			std::cout << arrConst[i] << std::endl;
	}

	return 0;
}