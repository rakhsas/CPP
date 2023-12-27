#pragma once

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <algorithm>

class RPN
{
private:
	std::string input;
public:
	RPN( std::string );
	~RPN();
	RPN( const RPN & );
	const RPN &operator=( const RPN & );
	std::string getInput() const;
	void	handleErrors( void );

	std::stack<std::string> _data;
};

