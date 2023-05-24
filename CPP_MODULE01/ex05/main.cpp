/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:27:35 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/24 20:09:47 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ( void )
{
	std::string	input;

	Harl	harl;
	do {
		std::cout << "\033[31m" << "Enter a level: " << "\033[0m";
		std::getline(std::cin, input);
		Harl harl;
		harl.complain(input);
	} while (input.compare("exit") != 0);
	return (0);
}
