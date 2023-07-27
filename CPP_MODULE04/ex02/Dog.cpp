/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:02:46 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/26 14:07:48 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
	std::cout << "[Dog] has been constructed\n";
    this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "[Dog] has been destructed\n";
	delete brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof!\n";
}

Dog::Dog( const Dog& src ): AAnimal("Dog")
{
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
	std::cout << "Dog copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}