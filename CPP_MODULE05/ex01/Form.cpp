/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:23:05 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/02 15:36:07 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string _name, int _grade_to_sign, int _grade_to_execute ): name(_name), grade_to_sign(_grade_to_sign), grade_to_execute(_grade_to_execute), isSigned(false)
{
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw Form::GradeTooHighException();
    else if (grade_to_sign > 150 || grade_to_execute > 150)
        throw Form::GradeTooLowException();
}

Form::~Form(){}

std::string Form::getName() const { return name; }

int Form::getGradeSign() const { return grade_to_sign; }

int Form::getGradeExecute() const { return grade_to_execute; }

void    Form::beSigned( Bureaucrat &ref )
{
    if (ref.getGrade() <= grade_to_sign)
        isSigned = true;
    else
        throw GradeTooLowException();
}

bool    Form::getSignStatus() const {
    return isSigned;
}

std::ostream & operator<<( std::ostream &ofstream, Form const & of )
{
    ofstream << of.getName() << ", Form grade to sign " << of.getGradeSign() << ", Form grade to execute " << of.getGradeExecute();
    return ofstream;
}
