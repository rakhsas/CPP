/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:55:54 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/26 14:10:26 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] has been constructed\n";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "[Cat] has been destructed\n";
	delete brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!!!\n";
}

Cat::Cat( const Cat& src ) : AAnimal()
{
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "Cat copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}