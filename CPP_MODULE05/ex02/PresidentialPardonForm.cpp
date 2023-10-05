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

void	PresidentialPardonForm::executeForm( Bureaucrat const &ref ) const
{
	if (!getSignStatus())
		throw FormIsNotSigned();
	if (ref.getGrade() > getGradeExecute())
		throw GradeTooLowException();
	std::cout << target << " has been pardoned By Zaphod Beeblebrox.\n";
}