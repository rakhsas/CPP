/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 07:24:38 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/22 09:12:55 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
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
    std::cout << "[ FragTrap ] -> Give me high five request\n";
}
