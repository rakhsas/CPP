/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:15:38 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/02 15:38:03 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//[constructor]

Fixed::Fixed(void) {
	std::cout << "Default construcor called" << std::endl;
}

//[distructor]

Fixed::~Fixed(void) {
	std::cout << "Distructor called" << std::endl;
}

//[Copy Constructor]

Fixed::Fixed(const Fixed &p1) {
	std::cout << "copy constructor called" << std::endl;
	fixed_point_value = p1.fixed_point_value;
}

//[copy assignment operator]

Fixed& Fixed::operator=(const Fixed &p1) {
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value = p1.fixed_point_value;
	return *this;
}