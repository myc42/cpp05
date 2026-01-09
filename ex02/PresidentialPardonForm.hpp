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

class PresidentialPardonForm :  public AForm 
{
        public :
                PresidentialPardonForm(std::string target );
                ~PresidentialPardonForm ();
                void execute(Bureaucrat const & executor) const ;
                PresidentialPardonForm& operator=(const PresidentialPardonForm& other) ;
                PresidentialPardonForm(const PresidentialPardonForm& other);
} ;