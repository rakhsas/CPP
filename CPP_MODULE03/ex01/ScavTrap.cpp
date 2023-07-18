/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 07:28:50 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/16 10:41:43 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
    this->_hit_points=100;
    this->_energy_points=50;
    this->_attack_damage = 20;
    std::cout << "[ ScavTrap ] -> Constructed\n";
}
ScavTrap::~ScavTrap()
{
    std::cout << "[ ScavTrap ] -> destructed\n";
}

int ScavTrap::getHitpoints()
{
    return this->_hit_points;
}

void    ScavTrap::guardGate()
{
    std::cout << "[ ScavTrap ] -> is now in Gate keeper mode\n";
}