/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:32:54 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/03 17:03:51 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form 
{
    private :
             const std::string _name ;
             bool _isSigned;
             const int _gradeRequiredToSign  ;
             const int _gradeRequiredToExecute ;
    public :
             Form( std::string name, int gradesign , int exegrade) ;
            ~Form ();
            class GradeTooHighException : public std::exception 
            {
                public  :
                        GradeTooHighException() throw();
                        virtual ~GradeTooHighException () throw();
                        virtual const char* what() const throw(); 
            } ;
            class GradeTooLowException : public std::exception
            {
                public :
                        GradeTooLowException() throw();
                        virtual ~GradeTooLowException ()  throw();
                        virtual const char* what() const throw();       
            } ;
            void beSigned(Bureaucrat one);
            std::string getName ();
            bool GetSigned ();
            int getGradeRequiredTOSign ();
            int getGradeRequiredToEx (); 
            Form& operator=(const Form& other) ;
            Form(const Form& other);
             
} ;

std::ostream& operator<<(std::ostream& os,  Form& f);