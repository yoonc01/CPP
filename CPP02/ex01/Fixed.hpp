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

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;
};

std::ostream&   operator<<(std::ostream& os, const Fixed& obj);

#endif