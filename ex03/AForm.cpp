/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:27:28 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/09 13:32:00 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"



AForm::AForm( std::string name , int gradesign , int exegrade)   :  _name(name) , _isSigned(false) ,_gradeRequiredToSign (gradesign),_gradeRequiredToExecute(exegrade) 
{ 
        std::cout << _name << " AForm is constructor called \n" ;
        if (gradesign < 1 || exegrade < 1)
		throw GradeTooHighException();
	    else if (gradesign > 150 || exegrade > 150)
		throw GradeTooLowException();
}

AForm::~AForm ()
{
    std::cout << _name << " AForm  destructor called \n" ;
}




 void AForm::beSigned(Bureaucrat one)
 {
        (void)_gradeRequiredToExecute ;
        if(one.getGrade() <= _gradeRequiredToSign  &&  one.getGrade() > 0 )
        {
            _isSigned = true ;
            std::cout <<  one.getName() << "signed " <<  "AForm" << std::endl;
        }
        else 
        {
            std::cout <<  one.getName() << " couldn’t sign " <<  " AForm" << " because" << "reason " <<  std::endl;
            throw GradeTooLowException ();
            
        }
            
 }

 std::string AForm::getName () const 
 {
    return _name ;
 }
 
bool AForm::GetSigned () const 
{
    return _isSigned;
}

  int AForm::getGradeRequiredTOSign ()
{
    return _gradeRequiredToSign ;
}

 int AForm::getGradeRequiredToEx () const 
{
    return _gradeRequiredToExecute ;
}


AForm& AForm::operator=(const AForm& other) 

{
         std::cout <<  "AForm  assignment operator called \n" ;
        if(this != &other)
        {
             _isSigned = other._isSigned;
        }
      
        return  *this ;
}

AForm::AForm(const AForm& other)  :_name(other._name) , _isSigned (other._isSigned) , _gradeRequiredToSign (other._gradeRequiredToSign),_gradeRequiredToExecute(other._gradeRequiredToExecute) 
{
      std::cout <<  "AForm  copy operator called \n"  ;
      
}

            
std::ostream& operator<<(std::ostream& os,  AForm& f) {
    os << "Name is : " << f.getName () << ", grade required to sign is " << f.getGradeRequiredToEx() << " and grade required to execute is " << f.getGradeRequiredToEx () << " \n";
    return os;
}




