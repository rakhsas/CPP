/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:36:23 by rakhsas           #+#    #+#             */
/*   Updated: 2023/08/01 10:21:45 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materias[4];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource &operator=( MateriaSource const & );
        MateriaSource( MateriaSource const & );
        void    learnMateria( AMateria *);
        AMateria *createMateria( std::string const & );
};

#endif