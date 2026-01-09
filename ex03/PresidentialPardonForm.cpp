/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:27:43 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/06 15:24:40 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonAForm::PresidentialPardonAForm(std::string target) : AForm(target, 25,5) 
{
     std::cout << "PresidentialPardonAForm constructor called \n";
}

PresidentialPardonAForm::~PresidentialPardonAForm()
{

     std::cout << "PresidentialPardonAForm destructor called \n";
} 

PresidentialPardonAForm& PresidentialPardonAForm::operator=(const PresidentialPardonAForm& other) 
{
     AForm::operator=(other) ;
     return *this ;
}


PresidentialPardonAForm::PresidentialPardonAForm(const PresidentialPardonAForm& other) : AForm(getName(), 25,5)
{
     *this = other ;
}

 void PresidentialPardonAForm::execute(Bureaucrat const & executor) const 
 {
    if(!GetSigned())
          throw FormNotSignException() ;
     if(executor.getGrade() > getGradeRequiredToEx() )
          throw Bureaucrat::GradeTooLowException();
     std::cout << getName() << " a été pardonné par Zaphod Beeblebrox" << std::endl;
 }
