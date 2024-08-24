/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:33:38 by mimoreir          #+#    #+#             */
/*   Updated: 2024/08/24 13:51:42 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main( void )
{
	Bureaucrat *bureaucrat = new Bureaucrat("ash", 1);
	Intern *noob = new Intern();
	AForm *form;

	//"PresidencialForm", "RobotomyRequest", "ShrubberyForm"
	form = noob->makeForm("ShrubberyForm", "target");

	
	
	try
	{
		std::cout << *bureaucrat << *form;
		form->beSigned(*bureaucrat);
		std::cout << *form;
		bureaucrat->executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete bureaucrat;
	delete noob;
	delete form;
}
