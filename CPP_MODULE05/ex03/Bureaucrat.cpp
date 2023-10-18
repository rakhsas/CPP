/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:41:37 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/14 17:55:59 by rakhsas          ###   ########.fr       */
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
	executed = false;
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

void   Bureaucrat::signForm( AForm &ref )
{
	ref.beSigned( *this );
	if ( ref.getSignStatus() )
		std::cout << name << " signed " << ref.getName() << std::endl;
	else
		std::cout << name << " Couldn't sign " << ref.getName() << "because the grade is too Low\n";
}

bool	Bureaucrat::isExecuted() const {
	return executed;
}

void	Bureaucrat::executeForm( AForm const &ref )
{
	if (getGrade() <= ref.getGradeExecute() && ref.getSignStatus())
	{
		executed = true;
		ref.execute(*this);
		std::cout << getName() << " executed " << ref.getName() << std::endl;
	}
	else
		std::cout << getName() << " could not execute " << ref.getName() << std::endl;
}

std::ostream & operator<<( std::ostream &ofstream, Bureaucrat const & of )
{
	ofstream << of.getName() << ", bureaucrat grade " << of.getGrade();
	return ofstream;
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{ return "Grade to Low"; }
const char* Bureaucrat::GradeTooHighException::what() const throw()
{ return "Grade to High"; }