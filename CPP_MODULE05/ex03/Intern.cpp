/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:34:33 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/14 17:15:19 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern( Intern const &ref ) { *this = ref; }
Intern &Intern::operator=( Intern const &ref ) {
    if ( this == &ref)
		return *this;
	return *this;
}
AForm *Intern::makeForm( std::string formName, std::string target )
{
    AForm*    array[] = { new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
    AForm *res = nullptr;
    for (size_t i = 0; i < 3; i++)
    {
        if (array[i]->getName().compare(formName) == 0)
        {
            res = array[i];
        } else {
            delete array[i];
        }
    }
    if (res)
        return res;
    throw AForm::notFoundException();
}