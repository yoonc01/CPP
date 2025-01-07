#include "Serializer.hpp"

int main() {
	Data data;
	data.name = "michang";
	data.age = 10;

	std::cout << "Data ptr : " << &data << std::endl;
	std::cout << "Data name : " << data.name << std::endl;
	std::cout << "Data age : " << data.age << std::endl;

	uintptr_t tmp = Serializer::serialize(&data);
	std::cout << "\nSerialized tmp : " << tmp << std::endl;
	Data* convertedData = Serializer::deserialize(tmp);

	std::cout << "\nConverted Data ptr : " << convertedData << std::endl;
	std::cout << "Converted Data name : " << convertedData->name << std::endl;
	std::cout << "Converted Data age : " << convertedData->age << std::endl;
	return (0);
}