/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:50:38 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/02 15:30:41 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    std::cout << "****************No exception****************\n";
        try {
            Bureaucrat b("me", 1);
            Form f("Form", 10, 11);

            b.signForm(f);
        }
        catch (const std::exception& exp) {
            std::cerr << "throw Exception: " << exp.what() << std::endl;
        }
     std::cout << "\n****************throw exception****************\n";
        try {
            Bureaucrat b("me", 11);
            Form f("Form", 10, 11);

            b.signForm(f);
        }
        catch (const std::exception& exp) {
            std::cerr << "throw Exception: " << exp.what() << std::endl;
        }
    return 0;
}