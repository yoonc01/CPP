#ifndef ITER_HPP
# define ITER_HPP

template <typename T> void  iter(T* arr, int len, void (*f)(T&)) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

template <typename T> void  iter(const T* arr, int len, void (*f)(const T&))
{
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

template <typename T> void printValue(T& value)
{
    std::cout << value << std::endl;
}

template <typename T> void printValue(const T& value)
{
    std::cout << value << std::endl;
}

#endif