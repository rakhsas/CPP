/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:50:38 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/02 14:10:06 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "************No exeptions************" << std::endl;
        try
        {
            Bureaucrat b1("Mohcin", 50);
            std::cout << b1 << std::endl;

            b1.increment();
            std::cout << b1 << std::endl;

            b1.decrement();
            std::cout << b1 << std::endl;
        }
    catch (const std::exception& exp) 
    {
        std::cerr << "Exception: " << exp.what() << std::endl;
    }
    std::cout << "\n\n************wrong grade************" << std::endl;
        try
        {
            Bureaucrat b1("Mohcin", 0);
            std::cout << b1 << std::endl;
        }
        catch (const std::exception& exp) 
        {
            std::cerr << "Exception: " << exp.what() << std::endl;
        }
    std::cout << "\n\n************wrong increment************" << std::endl;
        try
        {
            Bureaucrat b1("Mohcin", 1);
            std::cout << b1 << std::endl;

            b1.increment();
            std::cout << b1 << std::endl;
        }
        catch (const std::exception& exp) 
        {
            std::cerr << "Exception: " << exp.what() << std::endl;
        }
    std::cout << "\n\n************wrong decrement************" << std::endl;
        try
        {
            Bureaucrat b1("Mohcin", 150);
            std::cout << b1 << std::endl;

            b1.decrement();
            std::cout << b1 << std::endl;
        }
        catch (const std::exception& exp) 
        {
            std::cerr << "Exception: " << exp.what() << std::endl;
        }
    
}