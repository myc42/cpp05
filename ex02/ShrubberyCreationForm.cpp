/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:27:58 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/06 23:32:36 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target ) : AForm(target , 145,137)
{
    std::cout << "ShrubberyCreationForm constructor called \n ";
}

ShrubberyCreationForm::~ShrubberyCreationForm ()
{
        std::cout << "ShrubberyCreationForm destructor called \n ";

}


const char* ShrubberyCreationForm::CantNotOpenFile::what() const throw()
{   
     return "Cant not open file !";
}


void printAsciiTree(std::ostream &output)
{
    output
        << "        *                *\n"
        << "       ***              ***\n"
        << "      *****            *****\n"
        << "     *******          *******\n"
        << "    *********        *********\n"
        << "   ***********      ***********\n"
        << "  *************    *************\n"
        << "       | |              | |\n"
        << "       | |              | |"
        << std::endl;
}



ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) 
{
    AForm::operator=(other);
    return *this ;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(getName(), 145,137)
{
    *this = other ;
}


 void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
 {
       if(!GetSigned())
            throw FormNotSignException() ;
        if(executor.getGrade() > getGradeRequiredToEx() )
            throw Bureaucrat::GradeTooLowException();
        std::ofstream outfd;   
        outfd.open("_Shrubbery");
        if (!outfd.is_open())
        {
            throw CantNotOpenFile();
        }
        printAsciiTree(outfd);
        outfd.close();
   
 }