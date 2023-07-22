/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:35:25 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/22 08:56:53 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("clap1");
	clap1.attack("reda");
	clap1.attack("reda");
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.beRepaired(3);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
	clap1.takeDamage(1);
}