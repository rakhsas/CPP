/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 07:24:38 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/18 14:56:07 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "[ FragTrap ] -> Destructor called\n";
}

void    FragTrap::highFivesGuys( void )
{
    // this->check();
    // std::cout << _attack_damage << std::endl;
    std::cout << "[ FragTrap ] -> Give me high five request\n";
}

unsigned int FragTrap::getHit()
{
    return _hit_points;
}