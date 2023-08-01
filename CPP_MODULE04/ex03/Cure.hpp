/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:17:40 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/31 13:20:43 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    virtual ~Cure();
    Cure &operator=( Cure const & );
    Cure( Cure const & );

    virtual AMateria* clone() const;
    virtual void use ( ICharacter & );
};


#endif