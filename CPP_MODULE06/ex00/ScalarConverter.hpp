/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:51:05 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/17 16:38:56 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#define NANINF -1
#define CHAR 1
#define FLOAT 99
#define DOUBLE 42
#define INT 0
#define ERROR 999
#include "iostream"

class ScalarConverter
{
    private:
        std::string input;
        ScalarConverter(  );
    public:
        ~ScalarConverter();
        ScalarConverter( std::string input );
        std::string getInput() const;
        void    convert(  );
        int     checkInput();
        void    displayAsInteger( int ) const;
        void    displayAsFloat( int ) const;
        void    displayAsDouble( int ) const;
        void    displayAsCharacter( int ) const;
};

#endif