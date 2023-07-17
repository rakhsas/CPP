/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 10:17:39 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/04 14:38:15 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//[constructor]

Fixed::Fixed(void) {
	std::cout << "Default construcor called" << std::endl;
	this->fixed_point_value = 0;
}

//[Int constructor]

Fixed::Fixed( const int fp ): fixed_point_value(fp * 256) {
	std::cout << "Int constructor called" << std::endl;
}
//[Float constructor]

Fixed::Fixed( const float fp ) {
	std::cout << "Float constructor called" << std::endl;
	fixed_point_value = std::roundf(fp * 256);
}

//[Copy constructor]

Fixed::Fixed( const Fixed &src ) {
	std::cout << "copy constructor called" << std::endl;
	*this = src;
}

// [copy assignment operator]

Fixed& Fixed::operator=(  const Fixed &src ) {
	std::cout << "copy assignment operator called" << std::endl;
	fixed_point_value = src.fixed_point_value;
	return *this;
}

//[distructor]

Fixed::~Fixed() {
	std::cout << "distructor called" << std::endl;
}

//[getRawBits member function]

int	Fixed::getRawBits( void ) const {
	return this->fixed_point_value;
}

//[setRawBits member function]

void	Fixed::setRawBits( int const raw ) {
	this->fixed_point_value = raw;
}

float Fixed::toFloat( void ) const {
	return static_cast<float>(getRawBits() ) / 256;
}

int	Fixed::toInt( void ) const {
	return this->fixed_point_value >> this->fractional_bits;
}

std::ostream & operator<<( std::ostream &of, Fixed const &fo ) {
	of << fo.toFloat();
	return of;
}