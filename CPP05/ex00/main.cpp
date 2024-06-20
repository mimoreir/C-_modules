/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:33:38 by mimoreir          #+#    #+#             */
/*   Updated: 2024/06/20 10:10:09 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	try
	{
		Bureaucrat m("Miguel", 1);
		
		std::cout << m;
		m.incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat m("Miguel", 1);
		Bureaucrat z("Ze", 150);
		std::cout << m << z;
		m = z;
		std::cout << m;
		m.decrementGrade();
		
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}
