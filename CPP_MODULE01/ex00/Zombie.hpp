/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:16:52 by rakhsas           #+#    #+#             */
/*   Updated: 2023/05/18 14:27:59 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        ~Zombie(void);
        void    setZombieName(std::string name);
        void    announce(void) const;
    private:
        std::string _name;
};

Zombie* newZombie(std::string name);

Zombie* randomChump(int n, std::string name);

#endif