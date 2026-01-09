/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:04:48 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/03 17:21:49 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
      try
      {
           Bureaucrat bureau("macoulib", 123) ;  
           Form formulaire ("inscription", 1 , 149) ;
           std::cout << formulaire ;
           formulaire.beSigned(bureau);
      }
      catch(const std::exception& e)
      {
            std::cerr << e.what() << '\n';
      }
      

      
    
       
}