#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// 여기서 +에 대한 정의가 되어 있지 않아 오류가 날 거 같은데 확인 좀
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