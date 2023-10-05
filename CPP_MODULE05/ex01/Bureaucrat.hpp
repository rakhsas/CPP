/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:01:57 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/02 15:34:38 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"
#include "exception"
#include "Form.hpp"
class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
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
        void    signForm( Form & );
        class GradeTooHighException: public std::exception             
        {
            public:
                virtual const char* what() const throw() { return "Grade to High"; }
        };
        class GradeTooLowException: public std::exception             
        {
            public:
                virtual const char* what() const throw() { return "Grade to Low"; }
        };
};

std::ostream & operator<<( std::ostream &fo, Bureaucrat const & of );

#endif