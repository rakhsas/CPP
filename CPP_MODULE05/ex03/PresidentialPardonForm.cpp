/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:53:51 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/16 11:56:54 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential", 25, 5), target("Default"){}
PresidentialPardonForm::PresidentialPardonForm( std::string _target):
	AForm("Presidential", 25, 5) {
	target = _target;
}
PresidentialPardonForm::~PresidentialPardonForm() {
}
PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &ref )
:AForm(ref.getName(), ref.getGradeSign(), ref.getGradeExecute())
{ *this = ref; }
PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const &ref )
{
	if ( this == &ref)
		return *this;
	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const &ref ) const
{
	if (getSignStatus() == false)
		throw AForm::FormIsNotSigned();
	else if ( this->getGradeSign() <= ref.getGrade() )
		throw AForm::GradeTooLowException();
	else
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox. \n";
}

std::string PresidentialPardonForm::getTarget() const
{
	return target;
}