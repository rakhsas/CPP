/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:02:46 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/25 11:07:44 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(): Animal("Dog")
{
	std::cout << "[Dog] has been constructed\n";
}

Dog::~Dog()
{
	std::cout << "[Dog] has been destructed\n";
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof!\n";
}