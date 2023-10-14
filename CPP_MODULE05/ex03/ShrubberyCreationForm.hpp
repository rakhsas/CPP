/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:13:29 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/13 17:05:56 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm( std::string );
		~ShrubberyCreationForm();
		ShrubberyCreationForm( const ShrubberyCreationForm & );
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm & );
		void	execute( Bureaucrat const & ) const;

};



#endif