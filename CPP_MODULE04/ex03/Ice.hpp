/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:49:54 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/31 13:21:45 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "iostream"
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    virtual ~Ice();
    Ice &operator=( Ice const & );
    Ice ( Ice const & );
    virtual AMateria *clone() const;
    virtual void    use( ICharacter &);
};


#endif