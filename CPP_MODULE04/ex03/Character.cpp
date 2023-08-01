/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:35:15 by rakhsas           #+#    #+#             */
/*   Updated: 2023/08/01 09:34:12 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const &name )
{
    this->name = name;
    for(int i=0; i < 4; i++)
        this->inventory[i] = 0;
}
Character::Character( Character const &ref ){ *this = ref; }
Character::~Character(){}

Character &Character::operator=( Character const &ref )
{
    if ( this != &ref )
    {
        this->name = ref.name;
        for (int i = 0; i < 4; i++)
        {
            delete this->inventory[i];
            this->inventory[i] = ref.inventory[i];
        }
    }
    return *this;
}

std::string const &Character::getName() const { return this->name; }
void    Character::equip( AMateria *ref ){
    for (size_t i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = ref;
            return ;
        }
    }
}
void    Character::unequip( int number ) {
    if ( this->inventory[number] != NULL )
    {
        delete this->inventory[number];
        this->inventory[number] = NULL;
    }
}
void    Character::use( int nb, ICharacter &ref )
{
    if ( this->inventory[nb] )
        this->inventory[nb]->use(ref);
}
