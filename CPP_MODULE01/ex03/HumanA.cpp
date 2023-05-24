/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:38:00 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/24 18:16:15 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void    HumanA::attack() const {
    if (this->_weapon.getType() != "")
        std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
    else
        std::cout << _name << "doesn't have a wapon" << std::endl;
}