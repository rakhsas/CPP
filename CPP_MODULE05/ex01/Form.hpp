/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:18:47 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/02 15:34:27 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

// class Bureaucrat;
#include "Bureaucrat.hpp"
#include "stdbool.h"
#include "iostream"
class Bureaucrat;
class Form
{
    private:
        const std::string name;
        const int grade_to_sign;
        const int grade_to_execute;
        bool isSigned;
        Form();
    public:
        Form( const std::string , int , int );
        Form( Form const & );
        Form &operator=( const Form & );
        ~Form();
        std::string getName() const;
        int getGradeSign() const;
        int getGradeExecute() const;
        bool getSignStatus() const;
        void    beSigned( Bureaucrat & );
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

#endif