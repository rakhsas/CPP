/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:05:18 by rakhsas           #+#    #+#             */
/*   Updated: 2023/07/25 15:14:48 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain& );
		Brain& operator=( const Brain& );
};


#endif