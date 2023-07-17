/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:27:25 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/23 18:26:21 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"


class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &_weapon);
        void    attack() const;
    private:
        std::string _name;
        Weapon *_weapon;
};

#endif