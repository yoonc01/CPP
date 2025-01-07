#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T> void swap(T& a, T& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

template <typename T> T const& min(T const& a, T const& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T> T& min(T& a, T& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T> T const& max(T const& a, T const& b)
{
    if (b > a)
        return (b);
    return (a);
}

template <typename T> T& min(T& a, T& b)
{
    if (b > a)
        return (b);
    return (a);
}

#endif