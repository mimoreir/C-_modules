#include "RobotomyRequestForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:43:16 by mimoreir          #+#    #+#             */
/*   Updated: 2024/06/30 18:58:34 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string str) : AForm("RobotomyRequestForm", 72, 45), _target(str)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src) , _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &src)
{
    (void)src;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executer) const
{
	static int i = 0;
	if (executer.getGrade() > this->getGradeToExe())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getIsItSigned() == false)
		throw AForm::NotSignedException();
	else
	{
		if (i++ % 2 == 0)
			std::cout << "**Random Drilling Noises!**\n";
		else
			std::cout << "Robotomy failed!\n";
	}
}
