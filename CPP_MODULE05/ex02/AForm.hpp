/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:41:44 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/05 13:59:04 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

// class Bureaucrat;
#include "Bureaucrat.hpp"
#include "stdbool.h"
#include "iostream"
class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        const int grade_to_sign;
        const int grade_to_execute;
        bool isSigned;
        AForm();
    public:
        AForm( const std::string , int , int );
        AForm( AForm const & );
        AForm &operator=( const AForm & );
        ~AForm();
        std::string getName() const;
        int getGradeSign() const;
        int getGradeExecute() const;
        bool getSignStatus() const;
        void    beSigned( Bureaucrat & );
        void    setSign( int );
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
        class FormIsNotSigned: public std::exception
		{
			public:
				virtual const char* what() const throw() { return "Form Is not Signed!."; }
		};
        virtual void execute(Bureaucrat const & executor) const = 0;
};

#endif