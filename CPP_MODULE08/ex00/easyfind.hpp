#pragma once

#include "iostream"
#include <vector>

template <typename T>
int easyfind(T &container, int n)
{
    typename T::iterator found = std::find(container.begin(), container.end(), n);
    if (found != container.end())
        throw std::invalid_argument("Cannot find on the container.");
    return *found;
}
