/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:28:56 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/23 18:40:45 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"


class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack() const;
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif