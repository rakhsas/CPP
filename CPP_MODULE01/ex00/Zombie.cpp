/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:18:24 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/18 14:28:10 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie is born" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " is dead" << std::endl;
}

void    Zombie::announce(void) const
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setZombieName(std::string name)
{
    this->_name = name;
}