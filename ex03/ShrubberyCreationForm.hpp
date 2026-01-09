/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationAForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:28:01 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/03 17:28:02 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 
#include "AForm.hpp"

class ShrubberyCreationForm :  public AForm 
{
        public :
                ShrubberyCreationForm(std::string target );
                ~ShrubberyCreationForm ();
                void execute(Bureaucrat const & executor) const  ;
                ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other) ;
                ShrubberyCreationForm(const ShrubberyCreationForm& other);
                class CantNotOpenFile : public std::exception
                {
                public :
                     
                        virtual const char* what() const throw();       
                } ;
             

} ;