/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:35:25 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/22 09:15:06 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap ash( "Ash" );
    FragTrap ash2( ash );

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.highFivesGuys();
    ash.takeDamage( 10 );
    ash.beRepaired(10);
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    return 0;
}