/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:28:33 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/16 11:57:15 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
// ShrubberyCreationForm::ShrubberyCreationForm(): AForm("shruberry", 145, 137), target("target") {}
ShrubberyCreationForm::ShrubberyCreationForm( std::string tar ): AForm("shruberry", 145, 137), target(tar){}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &ref )
	:AForm(ref.getName(), ref.getGradeSign(), ref.getGradeExecute()) {
		*this = ref;
	}
ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &ref )
{
	if ( this != &ref )
	{
		this->setSign( ref.getGradeSign() );
	}
	return *this;
}

void	ShrubberyCreationForm::execute ( Bureaucrat const &ref ) const
{
	if (getSignStatus() == false)
                throw AForm::FormIsNotSigned();
        else if ( this->getGradeSign() <= ref.getGrade() )
                throw AForm::GradeTooLowException();
	else
	{
		std::ofstream outfile(target + "_shrubbery");
                outfile << "      /\\\n"
                        << "     /\\*\\\n"
                        << "    /\\O\\*\\\n"
                        << "   /*/\\/\\/\\\n"
                        << "  /\\O\\/\\*\\/\\\n"
                        << " /\\*\\/\\*\\/\\/\\\n"
                        << "/\\O\\/\\/*/\\/O/\\\n"
                        << "      ||\n"
                        << "      ||\n"
                        << "      ||\n";
                outfile.close();
	}
}