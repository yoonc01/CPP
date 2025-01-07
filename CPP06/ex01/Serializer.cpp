#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer constructor" <<std::endl;
}

Serializer::Serializer(const Serializer& obj)
{
    (void) obj;
    std::cout << "Serializer copy constructor" << std::endl;
}

Serializer& Serializer::operator=(const Serializer& obj)
{
    (void) obj;
    return (*this);
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor" << std::endl;
}

static uintptr_t    serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}