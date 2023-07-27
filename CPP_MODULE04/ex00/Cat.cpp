/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:55:54 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/25 11:07:51 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] has been constructed\n";
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "[Cat] has been destructed\n";
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!!!\n";
}