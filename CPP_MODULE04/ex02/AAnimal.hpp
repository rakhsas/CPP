/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:43:09 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/26 14:16:12 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "iostream"
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal();
		AAnimal( std::string );
		virtual ~AAnimal();
		AAnimal( AAnimal &obj );
		AAnimal& operator=( const AAnimal &obj );
		virtual void	makeSound( void ) const = 0;
		std::string getType( void ) const;
	protected:
		std::string type;
};

#endif