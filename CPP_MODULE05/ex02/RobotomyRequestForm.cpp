/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:08:56 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/16 11:53:43 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45), target("target") {}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): AForm("Robotomy", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &ref ): AForm(ref.target, ref.getGradeSign(), ref.getGradeExecute()) {
    *this = ref;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const &ref )
{
    if ( this != &ref)
        this->setSign( ref.getGradeSign() );
    return *this;
}
std::string RobotomyRequestForm::getTarget() const
{
	return target;
}
void	RobotomyRequestForm::execute( Bureaucrat const &ref ) const
{
	if (getSignStatus() == false)
        throw AForm::FormIsNotSigned();
    else if ( this->getGradeExecute() <= ref.getGrade() )
        throw AForm::GradeTooLowException();
	else
		std::cout << getTarget() << " has been robotomized successfully 50% of the time.\n";
}