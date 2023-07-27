/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:43:24 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/26 14:07:11 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("Aanimal")
{
	std::cout << "[AAnimal] has been constructed\n";
}

AAnimal::AAnimal( std::string type ): type(type)
{
    std::cout << "AAnimal " << this->type << " constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "[AAnimal] has been destructed\n";
}

AAnimal::AAnimal( AAnimal &ref )
{
	*this = ref;
}

AAnimal& AAnimal::operator=( const AAnimal &ref )
{
	this->type = ref.type;
	return *this;
}

std::string AAnimal::getType( void ) const
{
	return this->type;
}

void AAnimal::makeSound( void ) const
{
    std::cout << "Animal makeSound called\n" << std::endl;
}
