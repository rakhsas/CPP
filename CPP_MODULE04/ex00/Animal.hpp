/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:43:09 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/26 10:30:07 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	public:
		Animal();
		Animal( std::string );
		virtual ~Animal();
		Animal( Animal &obj );
		Animal& operator=( const Animal &obj );
		virtual void	makeSound( void ) const;
		std::string getType( void ) const;
	protected:
		std::string type;
};

#endif