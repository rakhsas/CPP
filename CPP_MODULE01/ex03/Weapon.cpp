/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:24:44 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/24 18:15:11 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon(){}

Weapon::Weapon(std::string _type): type(_type){}

const std::string&    Weapon::getType()
{
    return this->type;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}