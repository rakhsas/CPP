/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:35:43 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/17 17:11:39 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "stdio.h"
#include "iomanip"
ScalarConverter::ScalarConverter(std::string input): input(input){
	convert();
}

ScalarConverter::ScalarConverter( const ScalarConverter &ref )
{
	*this = ref;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& ref ) {
    if ( this != &ref ) {
		input = ref.input;
    }
    return *this;
}
ScalarConverter::~ScalarConverter(){}
std::string ScalarConverter::getInput() { return input; }
// Private Methods
int	ScalarConverter::checkInput()
{
	std::string input = this->getInput();
	if (input.compare("nan") == 0 || input.compare("+inf") == 0 ||
		input.compare("-inf") == 0 || input.compare("+inff") == 0 ||
		input.compare("-inff") == 0)
	{
		return (NANINF);
	}
	else if (input.length() == 1 &&
		(input[0] == '+' || input[0] == '-' || // prevents that the input of single digit integers get interpreted as a char
		input[0] == 'f' || input[0] == '.'))
	{
		return (CHAR);
	}
	else if (input.find_first_of("+-") != input.find_last_of("+-")) // catches any multiple or mixed use of + and -
		return (ERROR);
	else if (input.find_first_not_of("+-0123456789") == std::string::npos)
		return (INT);
	else if (input.find_first_not_of("+-0123456789.") == std::string::npos)
	{
		if (input.find_first_of(".") != input.find_last_of(".") || // catches `0..0`
			isdigit(input[input.find_first_of(".") + 1]) == false || // catches `0.`
			input.find_first_of(".") == 0) // catches `.0`
			return (ERROR);
		else
			return (DOUBLE);
	}
	else if (input.find_first_not_of("+-0123456789.f") == std::string::npos)
	{
		if (input.find_first_of("f") != input.find_last_of("f") || // catches `0.0ff`
			input.find_first_of(".") != input.find_last_of(".") || // catches `0..0f`
			input.find_first_of("f") - input.find_first_of(".") == 1 || //catches `0.f`
			input.find_first_of(".") == 0 || // catches `.0f`
			input[input.find_first_of("f") + 1] != '\0') // catches `0.0f0`
			return (ERROR);
		else{
			this->input = input.substr(0, input.length() - 1);
			return (FLOAT);
		}
	}
	else if ((input.length() == 1 && std::isprint(input[0])) ||
		(input.length() == 1 && std::isalpha(input[0])))
	{
		return (CHAR);
	}
	else
		return (ERROR);
}

void    ScalarConverter::convert() {
	int TYPE = checkInput();
	displayAsCharacter( TYPE );
	displayAsInteger( TYPE );
	displayAsFloat( TYPE );
	displayAsDouble( TYPE );
}

void    ScalarConverter::displayAsFloat( int TYPE ) const {
	char* endptr;
	double convertedValue = strtod(input.c_str(), &endptr);
	if (*endptr == '\0' && TYPE != NANINF && convertedValue >= 0) {
		float c = static_cast<float>(convertedValue);
		std::cout << std::fixed << std::setprecision(1) << "float: " << c << "f" << std::endl;
	} else if (TYPE == NANINF){
		std::cout << "float: nanf" << std::endl;
	} else {
		std::cout << "float: impossible" << std::endl;
	}
}

void ScalarConverter::displayAsInteger(int TYPE) const {
	char* endptr;
	long convertedValue = strtol(input.c_str(), &endptr, 10);

	// Check if the conversion was successful and the value is non-negative
	if (TYPE != NANINF && convertedValue >= 0) {
		int c = static_cast<int>(convertedValue);
		std::cout << "int: " << c << std::endl;
	} else {
		std::cout << "int: impossible" << std::endl;
	}
}

void ScalarConverter::displayAsCharacter(int TYPE) const {
	char* endptr;
	double convertedValue = strtod(input.c_str(), &endptr);
	// std::cout << (char)convertedValue << "\n";
	if (TYPE != NANINF && convertedValue >= 0) {
		char c = static_cast<char>(convertedValue);
		if (isprint(c)) {
			std::cout << "char: '" << c << "'" << std::endl;
		} else {
			std::cout << "char: Non Displayable" << std::endl;
		}
	} else {
		std::cout << "char: impossible" << std::endl;
	}
}

void    ScalarConverter::displayAsDouble( int TYPE ) const {
	char* endptr;
	double convertedValue = strtod(input.c_str(), &endptr);
	if (*endptr == '\0' && TYPE != NANINF && convertedValue >= 0)
	{
		double c = static_cast<double>(convertedValue);
		std::cout << std::fixed << std::setprecision(1) << "double: " << c << std::endl;
	} else if (TYPE == NANINF){
		std::cout << "double: nan" << std::endl;
	} else {
		std::cout << "double: impossible" << std::endl;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ScalarConverter a(av[1]);
	}
	else
		std::cout << " Enter something!!!" << std::endl;
}