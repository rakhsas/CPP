/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:25:37 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/18 14:31:30 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* randomChump(int n, std::string name)
{
    Zombie *zombie = new Zombie[n];
    for (int i = 0; i < n; i++) {
        zombie[i].setZombieName(name);
    }
    return zombie;
}