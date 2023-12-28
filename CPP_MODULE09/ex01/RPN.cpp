#include "RPN.hpp"

RPN::RPN( std::string input ): input(input){
	std :: cout << evaluateRPN() << std :: endl;
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

int ft_stoi(const std::string& str)
{
	int num;
	std::stringstream ss(str);
	ss >> num;
	return num;
}

long long RPN::evaluateRPN()
{
	int left;
	int right;
	int result;
	std::stringstream postfix(getInput());
	std::stack<int> temp;
	std::string s;

	while (postfix >> s)
	{
		if (s.length() > 1 || s.find_first_not_of("0123456789+-/* ") != std::string::npos)
			throw std::invalid_argument("just numbers and basic arithmetic expression allowed !!!");
		if (s == "+" || s == "-" || s == "/" || s == "*")
		{
			if (temp.size() < 2)
				throw std::invalid_argument("Not enough operands");
			right = temp.top();
			temp.pop();
			left = temp.top();
			temp.pop();
			switch (s.at(0))
			{
				case '+': result =  left + right ; break;
				case '-': result =  left - right ; break;
				case '/':
					if (right != 0)
						result =  left / right;
					else
						throw std::invalid_argument("Division by zero");
				break;
				case '*': result =  left * right ; break;
			}
			temp.push(result);
		}
		else
			temp.push(ft_stoi(s));
	}
	return temp.top();
}
