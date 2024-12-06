#include <iostream>
#include "Fixed.hpp"

const int   Fixed::_fractionBits = 8;

Fixed::Fixed() : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed&  Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        _rawBits = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_rawBits);
}

void    Fixed::setRawBits(int const rawBits)
{
    std::cout << "setRawBits member function called" << std::endl;
    _rawBits = rawBits;
}