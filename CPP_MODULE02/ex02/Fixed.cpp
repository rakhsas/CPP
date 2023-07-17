/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:36:59 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/07 11:02:29 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//[constructor]

Fixed::Fixed(void) {
	// std::cout << "Default construcor called" << std::endl;
	this->fixed_point_value = 0;
}

//[Int constructor]

Fixed::Fixed( const int fp ): fixed_point_value(fp * 256) {
	// std::cout << "Int constructor called" << std::endl;
}
//[Float constructor]

Fixed::Fixed( const float fp ) {
	// std::cout << "Float constructor called" << std::endl;
	fixed_point_value = std::roundf(fp * 256);
}

//[Copy constructor]

Fixed::Fixed( const Fixed &obj ) {
	// std::cout << "copy constructor called" << std::endl;
	*this = obj;
}

// [copy assignment operator]

Fixed& Fixed::operator=( const Fixed &obj ) {
	// std::cout << "copy assignment operator called" << std::endl;
	fixed_point_value = obj.fixed_point_value;
	return *this;
}

//[distructor]

Fixed::~Fixed() {
	// std::cout << "distructor called" << std::endl;
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





//[comparison operators]

bool	Fixed::operator<( const Fixed &obj ) const {
	return (fixed_point_value < obj.fixed_point_value);
}

bool	Fixed::operator<=( const Fixed &obj ) const {
	return (fixed_point_value <= obj.fixed_point_value);
}

bool	Fixed::operator>( const Fixed &obj) const {
	return (fixed_point_value > obj.fixed_point_value);
}

bool	Fixed::operator>=( const Fixed &obj ) const {
	return (fixed_point_value >= obj.fixed_point_value);
}

bool	Fixed::operator==( const Fixed &obj ) const {
	return (fixed_point_value == obj.fixed_point_value);
}

//[arithmetic operators]

Fixed	Fixed::operator*( const Fixed &obj ) const {
	return (this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator+( const Fixed &obj ) const {
	return (this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-( const Fixed &obj ) const {
	return (this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator/( const Fixed &obj ) const {
	return (this->toFloat() / obj.toFloat());
}

Fixed& Fixed::min( Fixed &obj1, Fixed &obj2) {
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

const Fixed& Fixed::min( Fixed const &obj1, Fixed const &obj2) {
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

Fixed& Fixed::max( Fixed &obj1, Fixed &obj2) {
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

const Fixed& Fixed::max( Fixed const &obj1, Fixed const &obj2) {
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

// [postFix increment operator]

Fixed	Fixed::operator++( int ) {
	Fixed	tempo(*this);
	fixed_point_value++;
	return tempo;
}

// [postFix decrement operator]

Fixed	Fixed::operator--( int ) {
	Fixed	tempo(*this);
	fixed_point_value--;
	return tempo;
}

// [prefix increment operator]

Fixed&	Fixed::operator++(void) {
	fixed_point_value++;
	return *this;
}

// [prefix decrement operator]

Fixed&	Fixed::operator--(void) {
	fixed_point_value--;
	return *this;
}

