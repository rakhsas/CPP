/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:16:26 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/25 12:08:54 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal( std::string );
		WrongAnimal( const WrongAnimal& src );
		WrongAnimal& operator=( const WrongAnimal& rhs );

		void            makeSound( void ) const;
		std::string     getType( void ) const;
	protected:
		std::string type;
};


#endif