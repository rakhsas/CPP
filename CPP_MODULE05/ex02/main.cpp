/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:42:03 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/15 18:54:04 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>
 int main()
{
    Bureaucrat b("Mohcin", 137);
    {
        try {
            PresidentialPardonForm par("pres");
            b.signForm(par);
            b.executeForm(par);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "---------------------------\n";

    {
        try {
            ShrubberyCreationForm shr("shru");
            b.signForm(shr);
            b.executeForm(shr);
        } catch ( std::exception &e ) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "---------------------------\n";

    {
        try {
            RobotomyRequestForm rob("robo");
            b.signForm(rob);
            b.executeForm(rob);
        } catch ( std::exception &e ) {
            std::cout << e.what() << std::endl;
        }
    }



    return 0;
}