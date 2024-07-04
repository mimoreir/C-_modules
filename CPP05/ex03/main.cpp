/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:33:38 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/04 10:38:13 by mimoreir         ###   ########.fr       */
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

	//{"PresidencialForm", "RobotomyRequest", "ShrubberyForm"};
	form = noob->makeForm("PresidencialForm", "target");
    //ShrubberyCreationForm form1("Shrubbery");
    //RobotomyRequestForm form2("Robotomy");
    //PresidentialPardonForm form3("President");
	
	
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
