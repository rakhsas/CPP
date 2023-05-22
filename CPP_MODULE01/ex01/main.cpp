/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:20:15 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/18 16:36:23 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *zHorde = zombieHorde(5, "zombie");
    int i = 0;
    while (i < 5)
    {
        zHorde[i].announce();
        i++;
    }
    
    delete [] zHorde;
    return 0;
}