/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:55:24 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/16 10:40:52 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "[ ClapTrap ] -> constructor called\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "[ ClapTrap ] -> distructor called \n";
}

ClapTrap::ClapTrap( const ClapTrap &c1 ) {
	std::cout << "[ ClapTrap ] -> copy constructor called \n";
	*this = c1;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &c1 ) {
	std::cout << "[ ClapTrap ] -> copy assignment operator called \n";
	_name = c1._name;
	_hit_points = c1._hit_points;
	_energy_points = c1._energy_points;
	_attack_damage = c1._attack_damage;
	return *this;
}

void	ClapTrap::attack( const std::string& target ) {
	check();
	std::cout << "[ ClapTrap ] " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!\n";
	_energy_points -= 1;
}

void ClapTrap::check()
{
	if (_energy_points <= 0 || _hit_points <= 0)
	{
		std::cout << "[ ClapTrap ] -> died\n" << std::endl;
		exit(1);
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	_energy_points -= 1;
	_attack_damage += amount;
	check();
	if (_attack_damage > 10)
		_attack_damage = 10;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hit_points <= amount)
	{
		std::cout << "[ ClapTrap ] -> is dead\n";
		return ;
	}
	std::cout << "[ ClapTrap ] -> " << _name << "takes " << amount 
		<< " damage\n";
	_hit_points -= amount;
}

std::string	ClapTrap::getName()
{
	return _name;
}