/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:04:56 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/09 13:40:55 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat(const std::string name , int grade) : _name(name) ,_grade(grade)
{
     std::cout << _name << " Constructor Bureaucrat called \n";
     if(_grade < 1)
        throw  GradeTooLowException ();
      if(_grade > 150 )
        throw  GradeTooHighException ();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << _name << " Destructor Bureaucrat called \n";
}

int  Bureaucrat::getGrade () const 
{
   
    return _grade ;
}

std::string Bureaucrat::getName () const
{
    return _name;
} 

void Bureaucrat::addGrade ()
{
    
    if(_grade == 1) 
        throw  GradeTooLowException ();
    else 
         _grade -- ;
}

void Bureaucrat::reduceGrade ()
{   
    if(_grade == 150) 
         throw  GradeTooHighException ();
    else 
        _grade ++;
          
}






void Bureaucrat::executeForm(AForm const & form) const {
    try {
        form.execute(*this);
        std::cout << getName()
                  << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << this->getName()
                  << " couldn’t execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}





 void Bureaucrat::signAForm(AForm &forsigned )
 {
       try {
        forsigned.beSigned(*this);
        std::cout << this->getName() << " signed " << forsigned.getName() << std::endl;
    }
    catch (const AForm::GradeTooLowException &e) {
        std::cout << this->getName() << " couldn’t sign " << forsigned.getName()
                  << " because " << e.what() << std::endl;
    }
 }
 

 Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) 
 {
    if(this != &other)
    {
        _grade = other._grade ;   
    }
    return *this ;
 }

 
Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name (other._name)
{
         _grade = other._grade ;
}

std::ostream& operator<<(std::ostream& os,  Bureaucrat& f) {
    os << f.getName() << ", bureaucrat grade " << f.getGrade() << ". \n";
    return os;
}
