#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:
        int              _rawBits;
        static const int _fractionBits;

    public:
        Fixed();
        Fixed(const Fixed& obj);
        Fixed&  operator=(const Fixed& obj);
        ~Fixed();
        Fixed(const int src);
        Fixed(const float src);

        Fixed   operator+(const Fixed& obj) const;
        Fixed   operator-(const Fixed& obj) const;
        Fixed   operator*(const Fixed& obj) const;
        Fixed   operator/(const Fixed& obj) const;

        bool    operator==(const Fixed& obj) const;
        bool    operator!=(const Fixed& obj) const;
        bool    operator>(const Fixed& obj) const;
        bool    operator<(const Fixed& obj) const;
        bool    operator<=(const Fixed& obj) const;
        bool    operator>=(const Fixed& obj) const;

        const Fixed operator++(int);
        Fixed&      operator++();
        const Fixed operator--(int);
        Fixed&      operator--();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;

        static Fixed&       max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        static Fixed&       min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);

};

std::ostream&   operator<<(std::ostream& os, const Fixed& obj);

#endif