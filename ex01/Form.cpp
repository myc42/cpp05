/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:28:52 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/03 17:07:00 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"



Form::Form( std::string name , int gradesign , int exegrade)   :  _name(name) , _isSigned(false) ,_gradeRequiredToSign (gradesign),_gradeRequiredToExecute(exegrade) 
{ 
        std::cout << _name << " form is constructor called \n" ;
        if (gradesign < 1 || exegrade < 1)
		throw GradeTooHighException();
	    else if (gradesign > 150 || exegrade > 150)
		throw GradeTooLowException();
}

Form::~Form ()
{
    std::cout << _name << " form  destructor called \n" ;
}


Form::GradeTooHighException::GradeTooHighException()  throw()
{
    std::cout << "GradeTooHighException constructor Called \n";

}
Form::GradeTooHighException::~GradeTooHighException ()  throw()
{
    std::cout << "GradeTooHighException destructor Called \n";

}

const char* Form::GradeTooHighException::what() const throw()
{   
     return "Grade trop bas pour signe!";
}

Form::GradeTooLowException::GradeTooLowException()  throw()
{
    std::cout << "GradeTooLowException constructor Called \n";
}
Form::GradeTooLowException::~GradeTooLowException ()  throw()
{
        std::cout << "GradeTooLowException destructor Called \n";

}
 const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade trop élevé pour signe !";
}

 void Form::beSigned(Bureaucrat one)
 {
        (void)_gradeRequiredToExecute ;
        if(one.getGrade() <= _gradeRequiredToSign  &&  one.getGrade() > 0 )
        {
            _isSigned = true ;
            std::cout <<  one.getName() << "signed " <<  "Form" << std::endl;
        }
        else 
        {
            std::cout <<  one.getName() << " couldn’t sign " <<  " Form" << " because" << "reason " <<  std::endl;
            throw GradeTooLowException ();
            
        }
            
 }

 std::string Form::getName ()
 {
    return _name ;
 }
 
bool Form::GetSigned ()
{
    return _isSigned;
}

  int Form::getGradeRequiredTOSign ()
{
    return _gradeRequiredToSign ;
}

 int Form::getGradeRequiredToEx ()
{
    return _gradeRequiredToExecute ;
}


Form& Form::operator=(const Form& other) 

{
         std::cout <<  "Form  assignment operator called \n" ;
        if(this != &other)
        {
             _isSigned = other._isSigned;
        }
      
        return  *this ;
}

Form::Form(const Form& other)  :_name(other._name) , _isSigned (other._isSigned) , _gradeRequiredToSign (other._gradeRequiredToSign),_gradeRequiredToExecute(other._gradeRequiredToExecute) 
{
      std::cout <<  "Form  copy operator called \n"  ;
      
}

            
std::ostream& operator<<(std::ostream& os,  Form& f) {
    os << "Name is : " << f.getName () << ", grade required to sign is " << f.getGradeRequiredToEx() << " and grade required to execute is " << f.getGradeRequiredToEx () << " \n";
    return os;
}