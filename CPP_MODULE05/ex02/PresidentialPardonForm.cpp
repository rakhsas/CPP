/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:53:51 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/16 11:52:18 by rakhsas          ###   ########.fr       */
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
	if (getSignStatus() == false)
        throw AForm::FormIsNotSigned();
    else if ( this->getGradeExecute() <= ref.getGrade() )
        throw AForm::GradeTooLowException();
	else
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox. \n";
}

std::string PresidentialPardonForm::getTarget() const
{
	return target;
}