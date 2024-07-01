#include "PresidentialPardonForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:42:59 by mimoreir          #+#    #+#             */
/*   Updated: 2024/06/30 18:43:00 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string str) : AForm("PresidentialPardonForm", 25, 5), _target(str)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &src)
{
	(void)src;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executer) const
{
	if (executer.getGrade() > this->getGradeToExe())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getIsItSigned() == false)
		throw AForm::NotSignedException();
	else
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
	}
}
