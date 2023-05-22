/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:56:19 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/22 17:14:52 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include "iostream"
# include "fstream"

class Sed
{
    public:
        Sed(std::string name);
        ~Sed();
        void replace(std::string s1, std::string s2);
    private:
        std::string _in;
        std::string _out;
};

#endif