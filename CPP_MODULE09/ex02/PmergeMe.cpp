#include "PmergeMe.hpp"

int ft_stoi(const std::string& str)
{
	long num;
	std::stringstream ss(str);
	ss >> num;
	if (num < 0 || num > INT_MAX)
		throw std::invalid_argument("Argument must be a number positive.");
	return num;
}

int	checkArg(char *av)
{
	std::string number(av);
	if (number.find_first_not_of("0123456789") != std::string::npos || number.empty())
		throw std::invalid_argument("Argument must be a number positive.");
	return ft_stoi(number);
}

// void	initializeData(std::vector<int>& data, char **Av, int ac)
template <typename T>
void	initializeData(T& data, char **Av, int ac)
{
	int arg = 0;
	for (int i = 1; i < ac; i++)
	{
		arg = checkArg(Av[i]);
		data.push_back(arg);
	}
}

// std::vector<int>	merge(std::vector<int>& _fake1, std::vector<int>& _fake2)
template <typename T>
T	merge(T& _fake1, T& _fake2)
{
	T _data;
	size_t i = 0;
	size_t j = 0;
	while (i < _fake1.size() && j < _fake2.size())
	{
		if (_fake1[i] < _fake2[j])
		{
			_data.push_back(_fake1[i]);
			i++;
		}
		else
		{
			_data.push_back(_fake2[j]);
			j++;
		}
	}
	while (i < _fake1.size())
	{
		_data.push_back(_fake1[i]);
		i++;
	}
	while (j < _fake2.size())
	{
		_data.push_back(_fake2[j]);
		j++;
	}
	return _data;
}

// void	mergeSort(std::vector<int>& data)
template <typename T>
void	mergeSort(T& data)
{
	if (data.size() <= 1)
		return ;
	T _fake1;
	T _fake2;
	_fake1.assign(data.begin(), data.begin() + data.size() / 2);
	_fake2.assign(data.begin() + data.size() / 2, data.end());
	mergeSort(_fake1);
	mergeSort(_fake2);
	data.clear();
	data = merge(_fake1, _fake2);
}

// void	beginMerge(std::vector<int>& _data)
template <typename T>
void	beginMerge(T& _data)
{
	T _fake1;
	T _fake2;
	_fake1.assign(_data.begin(), _data.begin() + _data.size() / 2);
	_fake2.assign(_data.begin() + _data.size() / 2, _data.end());
	mergeSort(_fake1);
	mergeSort(_fake2);
	for (size_t i = 0; i < _fake2.size(); i++)
	{
		typename T::iterator it = std::lower_bound(_fake1.begin(), _fake1.end(), _fake2[i]);
		_fake1.insert(it, _fake2[i]);
	}
	_data = _fake1;
}

// void	print(std::vector<int> &_data)
template <typename T>
void	print(T &_data)
{
	std::cout << "Before: ";
	if (_data.size() > 5)
		std::cout << _data.at(0) << " " << _data.at(1) << " " << _data.at(2) << " " << _data.at(3) << " [...]" << std::endl;
	else
	{
		for (size_t i = 0; i < _data.size(); i++)
			std::cout << _data.at(i) << " ";
		std::cout << std::endl;
	}
	beginMerge(_data);
	std::cout << "After: ";
	if (_data.size() > 5)
		std::cout << _data.at(0) << " " << _data.at(1) << " " << _data.at(2) << " " << _data.at(3) << " [...]" << std::endl;
	else
	{
		for (size_t i = 0; i < _data.size(); i++)
			std::cout << _data.at(i) << " ";
		std::cout << std::endl;
	}
}

int main( int ac, char **av)
{
	if (ac >= 3)
	{
		try {
			clock_t start = clock();
			std::vector<int> _data;
			initializeData(_data, av, ac);
			print(_data);
			clock_t end = clock();
			clock_t start1 = clock();
			std::deque<int> data;
			initializeData(data, av, ac);
			print(data);
			clock_t end1 = clock();
			std::cout << "Time to process range of " << _data.size() << " elements with std::vector: " << std::fixed << (double)(end - start) / CLOCKS_PER_SEC << "s." << std::endl;
			std::cout << "Time to process range of " << data.size() << " elements with std::deque: " << std::fixed << (double)(end1 - start1) / CLOCKS_PER_SEC << "s." << std::endl;
			// bool a = std::is_sorted(_data.begin(), _data.end());
		} catch ( std::exception &e )
		{
			std::cout << "\e[0;31mError: " << e.what() << ".\033[0m" << std::endl;
		}
	}
	else
		std::cout << "\e[0;31mError: USES: ./PmergeMe `numbers...`.\033[0m" << std::endl;

}