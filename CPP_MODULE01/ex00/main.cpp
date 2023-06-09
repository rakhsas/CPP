/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:23:09 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/25 11:55:31 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 #include <cstdlib>
#define N 4

int main( void ) {
    Zombie *zombie = randomChump(N, "zombi");

    for (size_t i = 0; i < N; i++) {
        zombie[i].announce();
    }
    delete [] zombie;
    // system("leaks zombie");
    return 0;
}