#ifndef FIXED_HPP
# define FIXED_HPP

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

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif