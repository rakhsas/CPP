/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:57:15 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/03 10:02:29 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	fixed_point_value;
		static const int fractional_bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &src);	// Copy constructor
		Fixed &operator=(const Fixed &src);	// copy assignment operator
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif