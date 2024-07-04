/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:06:38 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/04 10:30:08 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
#define INTERN

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		
	public:
		Intern();
		Intern(const Intern& src);
		~Intern();
		Intern &operator=(const Intern& src);
		AForm* makeForm(std::string type, std::string target);
		
};

#endif