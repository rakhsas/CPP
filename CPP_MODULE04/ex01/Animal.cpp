/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:43:24 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/25 11:07:58 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("animal")
{
	std::cout << "[Animal] has been constructed\n";
}

Animal::Animal( std::string type ): type(type)
{
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] has been destructed\n";
}

Animal::Animal( Animal &ref )
{
	*this = ref;
}

Animal& Animal::operator=( const Animal &ref )
{
	this->type = ref.type;
	return *this;
}

std::string Animal::getType( void ) const
{
	return this->type;
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makeSound called\n" << std::endl;
}
