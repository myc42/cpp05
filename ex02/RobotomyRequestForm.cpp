/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:27:52 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/06 23:31:33 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target,72,45)
{
        std::cout << "RobotomyRequestAForm constructor called \n"; 
}

RobotomyRequestForm::~RobotomyRequestForm ()
{

        std::cout << "RobotomyRequestAForm destructor called \n"; 

}




const char* RobotomyRequestForm::RobotomyFailed::what() const throw()
{   
     return "Robotomy is failed  !";
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) 
{
       AForm::operator  = (other) ;
       return *this ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :AForm(getName(),72,45)
{
        *this = other ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
        if(!GetSigned())
            throw FormNotSignException() ;
        if(executor.getGrade() > getGradeRequiredToEx() )
            throw Bureaucrat::GradeTooLowException();
        std::cout << getName() << "Fait quelques bruits de forage \n" ;
        if (std::rand() % 2 == 0) {
		throw RobotomyFailed();
	}
        std::cout << getName() << "succes \n" ;
        
}