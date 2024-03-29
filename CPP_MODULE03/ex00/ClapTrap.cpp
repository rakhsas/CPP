/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:55:24 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/27 11:15:24 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "constructor called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "distructor called \n";
}

ClapTrap::ClapTrap( const ClapTrap &c1 ) {
	*this = c1;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &c1 ) {
	_name = c1._name;
	_hit_points = c1._hit_points;
	_energy_points = c1._energy_points;
	_attack_damage = c1._attack_damage;
	return *this;
}

void	ClapTrap::attack( const std::string& target ) {
	// check();
	if (_energy_points <= 0 || _hit_points > 10 || _hit_points <= 0 || _hit_points > 10)
	{
		std::cout << "ClapTrap died" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!\n";
	_energy_points -= 1;
}

void ClapTrap::check()
{
	if (_energy_points <= 0 || _hit_points > 10 || _hit_points <= 0 || _hit_points > 10)
	{
		std::cout << "ClapTrap died\n" << std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	_energy_points -= 1;
	_hit_points += amount;
	check();
}


void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hit_points <= amount)
	{
		std::cout << "ClapTrap is dead\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount
		<< " damage\n";
	_hit_points -= amount;
}