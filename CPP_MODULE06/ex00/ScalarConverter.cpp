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
ScalarConverter::~ScalarConverter(){}
std::string ScalarConverter::getInput() const { return input; }
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
		else
			return (FLOAT);
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

// void    ScalarConverter::displayAsFloat() const {
    
// }
// void    ScalarConverter::displayAsInteger() const {
    
// }
void    ScalarConverter::displayAsCharacter( int TYPE ) const {
    
    if (TYPE != NANINF && static_cast<double>(std::stod(getInput())) >= 0)
    {
        char c = static_cast<char>(std::stod(input));
        if ( isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non Displayable" << std::endl;
    } else {
        std::cout << "char: impossible" << std::endl;
    }
}
// void    ScalarConverter::displayAsDouble() const {
    
// }

int main (int ac, char **av)
{
    if (ac == 2)
    {
        ScalarConverter a(av[1]);
    }
    else
        std::cout << " Enter something!!!" << std::endl;
}