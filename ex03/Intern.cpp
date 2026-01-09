/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 23:36:30 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/09 13:33:46 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern ()
{
    std::cout << "intern constructor called \n";
}

Intern::~Intern ()
{
    std::cout << "intern destructor called \n";
}



Intern::Intern( const Intern& other ) {
	(void)other;
}

Intern&	Intern::operator=( const Intern& other ) {
	(void)other;
	return (*this);
}

AForm*	Intern::makeForm( std::string form, std::string target )
{
    std::string ax[3] = {"robotomy request", "shrubbery creation",
		"presidential pardon"} ;
    for (int i = 0 ; i < 3 ; i ++)
    {
        if (ax[i] == form)
        {
           std::cout << "Intern creates " << form << std::endl;
			switch (i) {
				case 0:
					return new RobotomyRequestForm(target);
				case 1:
					return new ShrubberyCreationForm(target);
				case 2:
					return new PresidentialPardonAForm (target);
			}
        }
        
    }
    throw formunknow();
}