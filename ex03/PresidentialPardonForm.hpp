/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonAForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:27:46 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/03 17:27:47 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "AForm.hpp"

class PresidentialPardonAForm :  public AForm 
{
        public :
                PresidentialPardonAForm(std::string target );
                ~PresidentialPardonAForm ();
                void execute(Bureaucrat const & executor) const ;
                PresidentialPardonAForm& operator=(const PresidentialPardonAForm& other) ;
                PresidentialPardonAForm(const PresidentialPardonAForm& other);
                
} ;