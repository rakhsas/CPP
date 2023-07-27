/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:21:00 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/25 11:28:46 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "[WrongAnimal] has been constructed\n";
}

WrongAnimal::WrongAnimal( std::string type ): type(type)
{
	std::cout << "Animal " << type << " Constructed Called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] has been destructed\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal &ref )
{
	*this = ref;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &ref )
{
	this->type = ref.type;
	return *this;
}

std::string WrongAnimal::getType( void ) const{
	return this->type;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal makeSound called\n";
}
