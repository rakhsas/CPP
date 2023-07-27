/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:02:53 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/26 14:07:41 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "AAnimal.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog: public AAnimal
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