#include "RPN.hpp"

RPN::RPN( std::string input ): input(input){
	handleErrors();
}

RPN::~RPN(){}

RPN::RPN(const RPN &ref){ *this = ref; }

const RPN &RPN::operator=(const RPN &ref)
{
	if (this != &ref)
	{
		input = ref.input;
		_data = ref._data;
	}
	return *this;
}

std::string RPN::getInput() const { return input; }

void	RPN::handleErrors( void ) {
	std::string reversed = getInput();
	std::string input = std::string(reversed.rbegin(), reversed.rend());
	std::stringstream ss(input);
	std::string number;
	while (getline(ss, number, ' '))
	{
		if (number.length() > 1)
			throw std::invalid_argument("just numbers accepted without sign !!!");
		if (number.find_first_not_of("0123456789+-*/") != std::string::npos)
			throw std::invalid_argument("just numbers and basic arithmetic expression allowed !!!");
		_data.push(number);
	}
	int total, pro, sum, sub, div;
	if (_data.size() == 2)
		throw std::invalid_argument("You have to enter at least one operation !!!");
	std::string first = _data.top();
	total = 1;
	sum = sub = 0;
	pro = div = 1;
	while (_data.size())
	{
		first = _data.top();
		if (first.find_first_not_of("*+-/") != std::string::npos)
		{
			sum += std::stoi(first);
			sub -= std::stoi(first);
			div /= std::stoi(first);
			pro *= std::stoi(first);
		}
		else if (first.find_first_not_of("0123456789") != std::string::npos)
		{
			if (first == "*")
				total *= pro;
			else if (first == "-")
				total += sub;
			else if (first == "+")
				total += sum;
			else
			{
				if(div == 0)
				{
					total = 0;
					break ;
				}
				total /= div;
			}
			sum = sub = 0;
			pro = div = 1;
		}
		_data.pop();
	}
	std::cout << total << std::endl;


}