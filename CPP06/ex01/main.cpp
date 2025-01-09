#include "Serializer.hpp"

int main() {
	Data 	data = {"hyoyoon", 42};

	Data	*originalPtr = &data;

	std::cout << "Data ptr : " << &data << std::endl;
	std::cout << "Data name : " << data.name << std::endl;
	std::cout << "Data value : " << data.value << std::endl;

	uintptr_t raw = Serializer::serialize(originalPtr);
	std::cout << "\nSerialized uintptr_t: " << raw << std::endl;

	Data* deserializedPtr = Serializer::deserialize(raw);

	if (originalPtr == deserializedPtr)
		std::cout << "Deserialization successful! Pointer matches." << std::endl;
	else
		std::cout << "Deserialization failed. Pointer mismatch." << std::endl;

	std::cout << "Deserialized Data: " << deserializedPtr->name << ", " << deserializedPtr->value << std::endl;

	return (0);
}