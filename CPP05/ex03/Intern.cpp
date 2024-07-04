#include "Intern.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:06:33 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/04 10:06:34 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Intern::Intern()
{

}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern()
{

}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
    return *this;
}

static AForm	*makePresidencial(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm	*makeRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string type, std::string target)
{
    std::string forms[] = {"PresidencialForm", "RobotomyRequest", "ShrubberyForm"};
	AForm*	(*func[])(std::string target) = {&makePresidencial, &makeRobot, &makeShrubbery};

	for (int i = 0; i < 3; i++)
	{
		if (type == forms[i])
			return (func[i](target));
	}
	std::cout << "Intern failed to create the form" << std::endl;
	return (NULL);
}
