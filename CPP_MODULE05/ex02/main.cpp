/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:42:03 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/04 17:41:46 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
 int main()
{
    Bureaucrat b("Mohcin", 10);
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
        // try {
        //     // ShrubberyCreationForm shr("shru");
        //     // b.signForm(shr);
        //     // b.executeForm(shr);
        // } catch ( std::exception &e ) {
        //     std::cout << e.what() << std::endl;
        // }
    }


    // RobotomyRequestForm rob("robo");
    // b.signForm(rob);
    // b.executeForm(rob);



    return 0;
}