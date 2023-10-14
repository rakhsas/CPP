/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:07:06 by rakhsas           #+#    #+#             */
/*   Updated: 2023/10/13 16:11:59 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm( std::string );
        ~RobotomyRequestForm();
        RobotomyRequestForm( RobotomyRequestForm const & );
        RobotomyRequestForm &operator=( RobotomyRequestForm const & );
		void	execute( Bureaucrat const & ) const;
		std::string getTarget() const ;

};

#endif