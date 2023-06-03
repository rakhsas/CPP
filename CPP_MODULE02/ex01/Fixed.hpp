/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 10:17:27 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/03 21:54:46 by rakhsas          ###   ########.fr       */
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
		Fixed( const Fixed &src );	// Copy constructor
		Fixed& operator=( const Fixed &src );	// copy assignment operator
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed(  );
};

std::ostream & operator<<( std::ostream &fo, Fixed const & of );


#endif