/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:29:17 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/14 17:13:06 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
    public:
        Intern();
        Intern( Intern const & );
        Intern &operator=( Intern const & );
        ~Intern();
        AForm   *makeForm( std::string, std::string );
    private:
        
};



#endif