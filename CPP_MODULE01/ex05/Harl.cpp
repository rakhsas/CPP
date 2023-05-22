/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:10:18 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/22 18:16:59 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void) {
    std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-
            ketchup burger. I really do!" << std::endl;
}
void    Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put
            enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void    Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for
            years whereas you started working here since last month." << std::endl;
}
void    Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {}
Harl::~Harl() {
    std::cout << "Harl is Destroyed" << std::endl;
}

void    Harl::complain() {

}