/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:09:52 by rakhsas           #+#    #+#             */
/*   Updated: 2023/08/01 10:41:16 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (size_t i = 0; i < 4; i++)
        materias[i] = NULL;
}
MateriaSource::~MateriaSource(){
    for (size_t i = 0; i < 4; i++)
        if (materias[i])
            delete materias[i];
}

MateriaSource &MateriaSource::operator=( MateriaSource const &ref )
{
    if ( this != &ref )
    {
        for (size_t i = 0; i < 4; i++)
        {
            if (materias[i])
                delete materias[i];
            materias[i] = ref.materias[i];
        }
    }
    return *this;
}

MateriaSource::MateriaSource( MateriaSource const &ref )
{ *this = ref; }

void     MateriaSource::learnMateria( AMateria *poi )
{
    for (size_t i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = poi;
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria( std::string const &type )
{
    for (size_t i = 0; i < 4; i++)
    {
        if (materias[i]->getType() == type)
            return materias[i];
    }
    return 0;
}