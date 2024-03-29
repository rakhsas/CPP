/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:48:04 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/23 18:41:45 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main (int ac, char **av)
{
	if (ac == 4)
	{
		Sed sed(av[1]);
		sed.replace(av[2], av[3]);
		sed.~Sed();
	}
	else
		std::cout << "uses: ./replace [filename] [s1] [s2]" << std::endl;
}