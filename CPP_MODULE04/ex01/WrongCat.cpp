/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:34:12 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/25 11:51:13 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
	std::cout << type << " constructor called\n";
}

WrongCat::~WrongCat( void )
{
	std::cout << type << " destructor called\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow!!!\n";
}