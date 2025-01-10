#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <stdint.h>
#include <set>

class Span {
    private:
        unsigned int        _n;
    
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& copy);
        Span& operator=(const Span& obj);
        ~Span();
        void    addNumber();
        void    addNumbers(int min, int max, unsigned int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        unsigned int getN() const;
}

#endif