/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:33:38 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/01 10:41:10 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{
	Bureaucrat bureaucrat("ash", 137);
    ShrubberyCreationForm form1("Shrubbery");
    RobotomyRequestForm form2("Robotomy");
    PresidentialPardonForm form3("President");
	
	try
	{
		std::cout << bureaucrat << form1;
		form1.beSigned(bureaucrat);
		std::cout << form1;
		bureaucrat.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}
