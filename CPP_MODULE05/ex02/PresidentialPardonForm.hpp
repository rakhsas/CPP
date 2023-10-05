/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:53:56 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/02 20:07:12 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFOTM_HPP
#define PRESIDENTIALPARDONFOTM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );
		~PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const &obj );
		PresidentialPardonForm &operator=( PresidentialPardonForm const & );

		void	executeForm( Bureaucrat const & ) const;
		class FormIsNotSigned: public std::exception
		{
			public:
				virtual const char* what() const throw() { return "Form Is not Signed!."; }
		};
		std::string getTarget() const ;

};

#endif