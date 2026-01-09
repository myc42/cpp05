/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 23:36:33 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/09 13:33:01 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>


class Intern 
{
     public :
            Intern ();
            ~Intern ();
            AForm	*makeForm( std::string form, std::string target );
            Intern( const Intern& other );
		    Intern& operator=( const Intern& other );
             class formunknow : public std::exception 
            {
                public  :
                         virtual const char* what() const throw()
                        {
                          

                             return  " form  unknow \n" ;

                        }
            } ;
} ;