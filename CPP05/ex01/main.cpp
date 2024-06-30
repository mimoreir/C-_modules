/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:33:38 by mimoreir          #+#    #+#             */
/*   Updated: 2024/06/30 17:47:48 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	try
	{
		Bureaucrat m("Miguel", 46);
		
		std::cout << m;
		Form ex("contract", 45, 45);
		std::cout << ex;
		try
		{
			m.signForm(ex);
		}
		catch(Form::GradeTooLowException &e)
		{
			std::cerr << e.what() << '\n';
		}
		m.incrementGrade();
		try
		{
			m.signForm(ex);
		}
		catch(Form::GradeTooLowException &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
