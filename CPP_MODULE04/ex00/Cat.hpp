/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:56:00 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/25 10:59:05 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "iostream"
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		void	makeSound( void ) const;
	private:
		std::string type;
};

#endif