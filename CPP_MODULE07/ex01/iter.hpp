#pragma once

#include "iostream"

template <typename T, typename R>

void	iter(T *array, size_t size, R f)
{
	for (size_t i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

template <typename R>
void	f( R & test)
{
	std::cout << test << "\n";
}