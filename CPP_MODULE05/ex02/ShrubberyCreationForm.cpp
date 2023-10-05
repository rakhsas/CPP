/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:28:33 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/05 13:42:19 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("shruberry", 145, 137), target("target") {}
ShrubberyCreationForm::ShrubberyCreationForm( std::string tar ): AForm("shruberry", 145, 137), target(tar){}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &ref )
	:AForm(ref.getName(), ref.getGradeSign(), ref.getGradeExecute()) {

	}
