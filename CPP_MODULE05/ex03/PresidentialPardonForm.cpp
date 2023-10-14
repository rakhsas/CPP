/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:53:51 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/14 17:25:36 by rakhsas          ###   ########.fr       */
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