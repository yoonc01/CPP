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

Fixed   Fixed::operator+(const Fixed& obj) const
{
    Fixed   tmp;

    tmp._rawBits = _rawBits + obj._rawBits;
    return (tmp);
}

Fixed   Fixed::operator-(const Fixed& obj) const
{
    Fixed   tmp;

    tmp._rawBits = _rawBits - obj._rawBits;
    return (tmp);
}

Fixed   Fixed::operator*(const Fixed& obj) const
{
    Fixed   tmp;

    tmp.setRawBits(_rawBits * obj._rawBits >> _fractionBits);
    return (tmp);
}

Fixed   Fixed::operator/(const Fixed& obj) const
{
    Fixed   tmp;

    if (obj._rawBits == 0)
    {
        std::cerr << "Error: Division by zero!" << std::endl;
        return (Fixed(0));
    }
    tmp.setRawBits((_rawBits << _fractionBits) / obj._rawBits);
    return (tmp);
}


bool    Fixed::operator==(const Fixed& obj) const
{
    return (_rawBits == obj._rawBits);
}

bool    Fixed::operator!=(const Fixed& obj) const
{
    return (_rawBits != obj._rawBits);
}

bool    Fixed::operator>(const Fixed& obj) const
{
    return (_rawBits > obj._rawBits);
}

bool    Fixed::operator<(const Fixed& obj) const
{
    return (_rawBits < obj._rawBits);
}

bool    Fixed::operator<=(const Fixed& obj) const
{
    return (_rawBits <= obj._rawBits);
}

bool    Fixed::operator>=(const Fixed& obj) const
{
    return (_rawBits >= obj._rawBits);
}


const Fixed Fixed::operator++(int)
{
    Fixed   tmp;

    tmp = *this;
    _rawBits++;
    return (tmp);
}

Fixed&      Fixed::operator++()
{
    _rawBits++;
    return (*this);
}

const Fixed Fixed::operator--(int)
{
    Fixed   tmp;

    tmp = *this;
    _rawBits--;
    return (tmp);
}

Fixed&      Fixed::operator--()
{
    _rawBits--;
    return (*this);
}

Fixed&       Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed&       Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
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