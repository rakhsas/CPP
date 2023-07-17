/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:37:09 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/06 12:53:09 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fixed_point_value;
		static const int fractional_bits = 8;
	public:
		Fixed(void);
		Fixed( const int fp );
		Fixed( const float fp );
		Fixed( const Fixed &obj );	// Copy constructor
		Fixed& operator=( const Fixed &obj );	// copy assignment operator
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		//[comparison operators]
		bool operator>( const Fixed &obj ) const;
		bool operator<( const Fixed &obj ) const;
		bool operator>=( const Fixed &obj ) const;
		bool operator<=( const Fixed &obj ) const;
		bool operator==( const Fixed &obj ) const;

		//[arithmetic operators]
		Fixed	operator+( const Fixed &obj ) const;
		Fixed	operator-( const Fixed &obj ) const;
		Fixed	operator*( const Fixed &obj ) const;
		Fixed	operator/( const Fixed &obj ) const;

		// [min, max, functions]
		static Fixed& min( Fixed &obj1, Fixed &obj2 );
		static const Fixed& min( Fixed const &obj1, Fixed const &obj2 );
		static Fixed& max( Fixed &obj1, Fixed &obj2 );
		static const Fixed& max( Fixed const &obj1, Fixed const &obj2 );

		// [increment decrement operators]
		Fixed	operator++( int );
		Fixed	operator--( int );
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		~Fixed(  );

};

std::ostream & operator<<( std::ostream &fo, Fixed const & of );


#endif