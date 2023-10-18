/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:41:29 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/14 17:56:46 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"
#include "exception"
#include "AForm.hpp"
class AForm;
class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		bool	executed;
		Bureaucrat();
	public:
		Bureaucrat( const std::string name, int grade );
		Bureaucrat( Bureaucrat const &ref );
		Bureaucrat &operator=( const Bureaucrat &ref );
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void    increment( void );
		void    decrement( void );
		void    signForm( AForm & );
		bool	isExecuted() const;
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		void	executeForm( AForm const & );
};

std::ostream & operator<<( std::ostream &fo, Bureaucrat const & of );

#endif