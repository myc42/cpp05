/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:04:53 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/09 13:38:09 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"


/*

    class exception 
{
public:
    exception() throw(){ } //Constructeur.
    virtual  exception() throw(); //Destructeur.
 
    virtual const char* what() const throw(); //Renvoie une chaîne "à la C" contenant des infos sur l'erreur.
};
*/

class Form ;
class Bureaucrat
{
  
    private :
             const std::string _name ;
             int _grade ;
     
    public :
  
            Bureaucrat(const std::string name , int grade);
            ~Bureaucrat();
            std::string getName() ;
            int getGrade();
            void addGrade();
            void reduceGrade ();
            class GradeTooHighException : public std::exception 
            {
                public  :
                       
                        virtual const char* what() const throw(){ return "Grade trop bas !";}
            } ;
            class GradeTooLowException : public std::exception
            {
                public :
                        
                        virtual const char* what() const throw()
                        { return "Grade trop élevé !";}      
            } ;

            /* Ensuite, ajoutez une fonction membre signForm() dans la classe Bureaucrat.
            Cette fonction doit appeler Form::beSigned() pour tenter de signer le formulaire.*/
            void signForm(Form &forsigne ) ;
            Bureaucrat& operator=(const Bureaucrat& other) ;
            Bureaucrat(const Bureaucrat& other);
};

std::ostream& operator<<(std::ostream& os,  Bureaucrat& f);