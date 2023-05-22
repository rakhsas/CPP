/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:05:38 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/22 18:10:05 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include "iostream"

class Harl
{
    public:
        Harl(/* args */);
        ~Harl();

        void complain( std::string level );
    };
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

typedef void (Harl::*t_function) (void);

#endif