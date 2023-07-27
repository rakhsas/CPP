/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:09:37 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/26 11:34:27 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Created\n";
}

Brain::~Brain()
{
	std::cout << "[Brain] Destroyed\n";
}

Brain::Brain( const Brain& src )
{
	*this = src;
}

Brain& Brain::operator=( const Brain &src )
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = src._ideas[i];
		}
	}
	return *this;
}