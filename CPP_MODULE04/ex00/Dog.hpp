/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:02:53 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/25 11:03:23 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Animal.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog( std::string );
		void	makeSound( void ) const;
	private:
};

#endif