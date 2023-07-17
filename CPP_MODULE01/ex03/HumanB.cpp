/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:29:47 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/23 18:30:19 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {
	_weapon = NULL;
}
HumanB::~HumanB() {}

void	HumanB::attack() const {
	if (this->_weapon && this->_weapon->getType() != "")
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " doesn't have a wapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon) {
	this->_weapon = &_weapon;
}