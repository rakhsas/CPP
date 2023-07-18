/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:35:25 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/18 15:42:51 by rakhsas          ###   ########.fr       */
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
    std::cout << ash.getHit() << std::endl;
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    std::cout << ash.getHit() << std::endl;
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    std::cout << ash.getHit() << std::endl;
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    ash.takeDamage( 10 );
    std::cout << ash.getHit() << std::endl;
    ash.highFivesGuys();

    return EXIT_SUCCESS;
}