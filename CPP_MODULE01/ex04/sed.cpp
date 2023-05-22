/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:03:36 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/22 17:49:59 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(std::string filename) {
    this->_in = filename;
    this->_out = this->_in + ".replace";
}

Sed::~Sed() {
    std::cout << "Sed is Destroyed" << std::endl;
}

void    Sed::replace(std::string needle, std::string required) {
    std::ifstream ifl(this->_in.c_str(), std::ios::in);
    if (ifl.is_open())
    {
        std::string content;
        if (std::getline(ifl, content, '\0'))
        {
            std::ofstream ofl(this->_out.c_str(), std::ios::out);
            size_t pos = content.find(needle);
            while (pos != std::string::npos)
            {
                content.erase(pos, needle.length());
                content.insert(pos, required);
                pos = content.find(needle);
            }
            ofl << content;
            ofl.close();
        }
        else
            std::cout << "File is Empty" << std::endl;
        ifl.close();
    }
    else
    {
        std::cout << "Unable to open the file " << std::endl;
        return ;
    }
    // std::cout << this->_in<< this->_out << needle << required << std::endl;
}