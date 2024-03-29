/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:39:25 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/24 12:54:49 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void    Harl::debug(void) {
	std::cout << "[DEBUG]\nlove having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void    Harl::info(void) {
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void    Harl::warning(void) {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void    Harl::error(void) {
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}


void	Harl::complain( std::string level ) {
	t_function function[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	switch (i)
	{
		case 0:
			(this->*function[0])();
		case 1:
			(this->*function[1])();
		case 2:
			(this->*function[2])();
		case 3:
			(this->*function[3])();
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
		break;
	}
}