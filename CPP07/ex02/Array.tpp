#include "Array.hpp"

template <typename T> Array<T>::Array() : _arr(NULL), _size(0) {}

template <typename T> Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n)
{
    for (unsigned int i = 0; i < n; i++) {
        _arr[i] = T();
    }
}

template <typename T> Array<T>::Array(const Array& obj) : _arr(new T[obj.size()]), _size(obj.size())
{
    for (unsigned int i = 0; i < _size; i++) {
        _arr[i] = obj._arr[i];
    }
}

template <typename T> Array<T>::~Array()
{
    delete[] _arr;
}

template <typename T> Array<T>& Array<T>::operator=(const Array& obj)
{
    if (this != &obj) {
        _size = obj.size();

        T   *arrTemp = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            arrTemp[i] = obj._arr[i];
        delete[] _arr;
        _arr = arrTemp;
    }
    return *this;
}

template <typename T> T& Array<T>::operator[](unsigned int idx)
{
    if (idx >= _size) {
        throw std::exception();
    }
    return _arr[idx];
}

template <typename T> const T& Array<T>::operator[](unsigned int idx) const
{
    if (idx >= _size) {
        throw std::exception();
    }
    return _arr[idx];
}

template <typename T> unsigned int Array<T>::size() const
{
    return _size;
}