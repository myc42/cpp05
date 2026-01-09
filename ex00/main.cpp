/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:04:48 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/06 23:33:22 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
      try
      {
           Bureaucrat bureau("ma", 1) ;  
           bureau.addGrade();
      }
      catch(const std::exception& e)
      {
            std::cerr << e.what() << '\n';
      }
      

       try
      {
           Bureaucrat bureau2("ms", 150) ;  
           bureau2.reduceGrade();
      }
      catch(const std::exception& e)
      {
            std::cerr << e.what() << '\n';
      }
      
         try
      {
           Bureaucrat bureau3("mx", 9) ;  
           bureau3.reduceGrade();
      }
      catch(const std::exception& e)
      {
            std::cerr << e.what() << '\n';
      }
      
    
       
}