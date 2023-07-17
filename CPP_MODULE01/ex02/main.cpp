  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:45:02 by rakhsas           #+#    #+#             */
/*   Updated: 2023/06/22 14:59:49 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "cstdio"
#include "string"

int main() {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << " Memory Adresses " << std::endl;
    std::cout << "string:\t\t" << &string << std::endl;
    std::cout << "stringPTR:\t" << stringPTR << std::endl;
    std::cout << "stringREF:\t" << &stringREF << std::endl;
    std::cout << " ---------------------------- " << std::endl;
    std::cout << " Values " << std::endl;
    std::cout << "string:\t\t" << string << std::endl;
    std::cout << "stringPTR:\t" << *stringPTR << std::endl;
    std::cout << "stringREF:\t" << stringREF << std::endl;
}