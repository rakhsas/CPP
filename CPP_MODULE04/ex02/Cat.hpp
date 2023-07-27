/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:56:00 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/26 14:07:55 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "iostream"
#include "AAnimal.hpp"

class Cat: public AAnimal
{
	public:
		Cat();
		~Cat();
		Cat( const Cat& );
		Cat& operator=( const Cat& src );
		void	makeSound( void ) const;
	private:
		Brain *brain;
};

#endif