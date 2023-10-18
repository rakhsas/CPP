/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:42:03 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/15 15:38:24 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>
 int main()
{
    try {
		Intern Intern;

		{
			try {
                AForm* rrf;
                rrf = Intern.makeForm("Presidential", "Bender");
                std::cout << rrf->getName() << std::endl;
            }
            catch (std::exception &e) {
			    std::cout << e.what() << std::endl;
			}
		}
		{
			try {
				AForm* rrf;
				rrf = Intern.makeForm("robotomyrequest", "Bender");
                std::cout << rrf->getName() << std::endl;
			}
            catch (std::exception &e) {
			    std::cout << e.what() << std::endl;
			}
		}
		{
            try {
                AForm* rrf;
                Bureaucrat b("biro9rat", 140);
                rrf = Intern.makeForm("Shrubbery", "Bender");
                std::cout << rrf->getName() << std::endl;
                b.signForm(*rrf);
                rrf->execute(b);
            }
            catch (std::exception &e) {
			    std::cout << e.what() << std::endl;
			}
        }
	}
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}h