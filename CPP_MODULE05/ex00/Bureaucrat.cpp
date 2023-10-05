/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:08:12 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/02 14:13:22 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string _name, int _grade ): name(_name)
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    grade = _grade;
}
Bureaucrat::Bureaucrat( Bureaucrat const &ref)
{
    *this = ref;
}
Bureaucrat &Bureaucrat::operator=( const Bureaucrat &ref )
{
    if ( this == &ref)
        return *this;
    return *this;
}
Bureaucrat::~Bureaucrat(){}
std::string Bureaucrat::getName() const { return name; }

int Bureaucrat::getGrade() const {
    return grade; 
}
void    Bureaucrat::increment() {
    if ( grade - 1 < 1)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}
void    Bureaucrat::decrement() {
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooHighException();
    grade--;   
}

std::ostream & operator<<( std::ostream &ofstream, Bureaucrat const & of )
{
    ofstream << of.getName() << ", bureaucrat grade " << of.getGrade();
    return ofstream;
}