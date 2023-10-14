/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:53:51 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/02 20:10:00 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), target("Default"){}
PresidentialPardonForm::PresidentialPardonForm( std::string _target):
	AForm("PresidentialPardonForm", 25, 5) {
	target = _target;
}
PresidentialPardonForm::~PresidentialPardonForm() {
}

void	PresidentialPardonForm::execute( Bureaucrat const &ref ) const
{
	if (ref.isExecuted())
	{
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox. \n";
	}else
		throw GradeTooLowException();
}

std::string PresidentialPardonForm::getTarget() const
{
	return target;
}