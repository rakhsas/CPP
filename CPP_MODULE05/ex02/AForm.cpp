/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:41:50 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/02 19:09:54 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( const std::string _name, int _grade_to_sign, int _grade_to_execute ): name(_name), grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute), isSigned(false)
{
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw AForm::GradeTooHighException();
    else if (grade_to_sign > 150 || grade_to_execute > 150)
        throw AForm::GradeTooLowException();
}

AForm::~AForm(){}

std::string AForm::getName() const { return name; }

int AForm::getGradeSign() const { return grade_to_sign; }

int AForm::getGradeExecute() const { return grade_to_execute; }

void    AForm::beSigned( Bureaucrat &ref )
{
    if (ref.getGrade() <= grade_to_sign)
        isSigned = true;
    else
        throw GradeTooLowException();
}

bool    AForm::getSignStatus() const {
    return isSigned;
}

std::ostream & operator<<( std::ostream &ofstream, AForm const & of )
{
    ofstream << of.getName() << ", Form grade to sign " << of.getGradeSign() << ", Form grade to execute " << of.getGradeExecute();
    return ofstream;
}
