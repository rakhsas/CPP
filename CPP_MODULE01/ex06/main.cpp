/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:54:01 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/22 22:59:20 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ( int ac, char **av )
{
	Harl	harl;
	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << " USES:: ./harlFilter 'LEVEL' " << std::endl;
}
