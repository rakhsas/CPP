/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:49:53 by rakhsas           #+#    #+#             */
/*   Updated: 2023/08/01 11:14:30 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){}
Ice::~Ice() {}
Ice &Ice::operator=( Ice const &ref )
{
    void *address = this;
    std::cout << &address << std::endl;
    if ( this != &ref )
        this->type = ref.type;
    return *this;
}
Ice::Ice( Ice const &ref ) { *this = ref; }
AMateria *Ice::clone() const { return (AMateria*)this; }
void    Ice::use( ICharacter &ref ) {
    std::cout << "* shoots an ice bolt at " << ref.getName() << " *\n";
}