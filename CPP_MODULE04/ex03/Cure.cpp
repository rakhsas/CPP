/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:20:45 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/31 13:32:15 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){}
Cure::~Cure() {}
Cure &Cure::operator=( Cure const & ref )
{
    if ( this != &ref )
    {
        this->type = ref.type;
    }
    return *this;
}

Cure::Cure( Cure const &ref ){ *this = ref; }
AMateria *Cure::clone() const { return (AMateria *)this; }
void    Cure::use ( ICharacter &ref )
{
    std::cout << "* heals " << ref.getName() << "'s wounds *\n";
}

