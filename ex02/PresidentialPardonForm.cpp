/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:27:43 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/09 13:47:13 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25,5) 
{
     std::cout << "PresidentialPardonAForm constructor called \n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{

     std::cout << "PresidentialPardonAForm destructor called \n";
} 

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) 
{
     AForm::operator=(other) ;
     return *this ;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(getName(), 25,5)
{
     *this = other ;
}

 void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
 {
    if(!GetSigned())
          throw FormNotSignException() ;
     if(executor.getGrade() > getGradeRequiredToEx() )
          throw Bureaucrat::GradeTooLowException();
     std::cout << getName() << " a été pardonné par Zaphod Beeblebrox" << std::endl;
 }
