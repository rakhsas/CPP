/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:02:53 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/26 13:15:23 by rakhsas          ###   ########.fr       */
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
		Dog( const Dog& );
		Dog& operator=( const Dog& );
		void	makeSound( void ) const;
	private:
		Brain *brain;
};

#endif