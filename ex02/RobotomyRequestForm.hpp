/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:27:55 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/06 23:31:05 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "AForm.hpp"

class RobotomyRequestForm :  public AForm 
{
        public :
                RobotomyRequestForm(std::string target );
                ~RobotomyRequestForm ();
                void execute(Bureaucrat const & executor) const ;
                RobotomyRequestForm& operator=(const RobotomyRequestForm& other) ;
                RobotomyRequestForm(const RobotomyRequestForm& other);
                class RobotomyFailed : public std::exception
                {
                public :
                       
                        virtual const char* what() const throw();       
                } ;

} ;