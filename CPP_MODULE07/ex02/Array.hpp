#pragma once

#include <iostream>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array()
        {
            _array = new T[0];
            _size = 0;
        }
        Array(unsigned int n)
        {
            _array = new T[n];
            _size = n;
        }
        Array(Array const &src)
        {
            *this = src;
        }
        ~Array()
        {
            delete [] _array;
        }
        Array &operator=(Array const &rhs)
        {
            if (this == &rhs)
                return (*this);
            _size = rhs.size();
            _array = new T[_size];
            for (size_t i = 0; i < size(); i++)
            {
                _array[i] = rhs._array[i];
            }
            return *this;
        }
        T &operator[](unsigned int i)
        {
            if (i >= _size)
                throw std::out_of_range("Out of range");
            return _array[i];
        }
        unsigned int size() const
        {
            return _size;
        }
};