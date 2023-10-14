/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:28:33 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/14 16:18:23 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
// ShrubberyCreationForm::ShrubberyCreationForm(): AForm("shruberry", 145, 137), target("target") {}
ShrubberyCreationForm::ShrubberyCreationForm( std::string tar ): AForm("Shrubbery", 145, 137), target(tar){}
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
	if (ref.isExecuted())
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


/*
Ticket:
	dateValidite
Billet:
	nombreUtilisations
lfer9 bin command o article commande
StatistiquesVente: khas ikoun bl ayam
mode paiement o type paiement
Salle o salle plan
publicite


*/