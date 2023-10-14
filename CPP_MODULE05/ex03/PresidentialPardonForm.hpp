/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:53:56 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/14 17:24:51 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFOTM_HPP
#define PRESIDENTIALPARDONFOTM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm( std::string );
		~PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const &obj );
		PresidentialPardonForm &operator=( PresidentialPardonForm const & );
		void	execute( Bureaucrat const & ) const;
		
		std::string getTarget() const ;

};

#endif