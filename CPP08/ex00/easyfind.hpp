#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <typename T> int easyfind(T& container, int n)
{
    int idx = 0;

    for(typename T::iterator it = container.begin(); it != container.end(); ++it)
    {
        if (*it == n)
            return idx;
        idx++;
    }
    return (-1);
}

#endif