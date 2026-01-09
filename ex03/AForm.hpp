/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:27:31 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/09 13:31:19 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"
#include <cstdlib>


class Bureaucrat;

class AForm 
{
    private :
             const std::string _name ;
             bool _isSigned;
             const int _gradeRequiredToSign  ;
             const int _gradeRequiredToExecute ;
    public :
            AForm( std::string name, int gradesign , int exegrade) ;
            virtual ~AForm ();
            class GradeTooHighException : public std::exception 
            {
                public  :
                       
                        virtual const char* what() const throw()
                        {
                             return "Grade trop bas pour signe!";
                        }
            } ;
            class GradeTooLowException : public std::exception
            {
                public :
                       
                        virtual const char* what() const throw()
                        {
                             return "Grade trop élevé pour signe !";
                        }      
            } ;
            class FormNotSignException : public std::exception
            {
                public :
                       
                        virtual const char* what() const throw()
                        {
                             return "FORM NOT SIGN !";
                        }       
            } ;
             
            void beSigned(Bureaucrat one);
            virtual std::string getName () const ;
            bool GetSigned () const ;
            int getGradeRequiredTOSign ();
            int getGradeRequiredToEx () const ; 
            AForm& operator=(const AForm& other) ;
            AForm(const AForm& other);
            virtual void execute(Bureaucrat const & executor) const = 0 ;
} ;

std::ostream& operator<<(std::ostream& os,  AForm& f);