/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:38:27 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/22 21:39:21 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include "iostream"

class Harl
{
	private:
		void    debug(void);
		void    info(void);
		void    warning(void);
		void    error(void);
	public:
		Harl(/* args */);
		~Harl();

		void complain( std::string level );
	};

typedef void (Harl::*t_function) (void);

#endif