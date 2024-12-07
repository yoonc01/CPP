#include <cmath>
#include "Fixed.hpp"

const int   Fixed::_fractionBits = 8;

Fixed::Fixed() : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj) : _rawBits(obj.getRawBits())
{
    std::cout << "Copy constructor called" << std::endl;
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

Fixed::Fixed(const int src)
    : _rawBits(src << _fractionBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float src)
    : _rawBits(roundf(src * (1 << _fractionBits)))
{
    std::cout << "Float constructor called" << std::endl;
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

int Fixed::toInt(void) const
{
    return (_rawBits >> _fractionBits);
}

float   Fixed::toFloat(void) const
{
    return ((static_cast<float>(_rawBits) / static_cast<float>((1 << _fractionBits))));
}

std::ostream&   operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return (os);
}