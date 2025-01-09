#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>

typedef unsigned long uintptr_t;

class   Serializer {
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& obj);
        Serializer& operator=(const Serializer& obj);

    public:
        static uintptr_t    serialize(Data* ptr);
        static Data*        deserialize(uintptr_t raw);

};

#endif