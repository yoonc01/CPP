#include <iostream>
#include "iter.hpp"
#include <string>

int main()
{
	{
		std::cout << "string test\n";
		std::string obj1 = "obj1";
		std::string obj2 = "obj2";
		std::string obj3 = "obj3";
		std::string arr[3] = {obj1, obj2, obj3};
		hyoyoon::iter(arr, 3, hyoyoon::printValue);
	}

	{
		std::cout << "\nconst string test\n";
		const std::string obj1 = "obj1";
		const std::string obj2 = "obj2";
		const std::string obj3 = "obj3";
		std::string arr[3] = {obj1, obj2, obj3};
		hyoyoon::iter(arr, 3, hyoyoon::printValue);
	}

	{
		std::cout << "\nint test\n";
		int arr[3] = {0, 1, 2};
		hyoyoon::iter(arr, 3, hyoyoon::printValue);
	}

	{
		std::cout << "\nconst int test\n";
		const int arr[3] = {0, 1, 2};
		hyoyoon::iter(arr, 3, hyoyoon::printValue);
	}
}