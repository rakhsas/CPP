/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:35:25 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/16 08:14:51 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap ash( "Ash" );
    ScavTrap ash2( ash );

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    ash.guardGate();

    return EXIT_SUCCESS;

}