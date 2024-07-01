#include "ShrubberyCreationForm.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:03:16 by mimoreir          #+#    #+#             */
/*   Updated: 2024/06/30 18:03:17 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ShrubberyCreationForm::ShrubberyCreationForm(std::string s) : AForm("ShrubberyCreationForm", 145, 137), _target(s)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm("ShrubberyCreationForm", src.getGradeToSign(), src.getGradeToExe()) , _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &src)
{
	(void)src;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executer) const
{
	if (executer.getGrade() > this->getGradeToExe())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getIsItSigned() == false)
		throw AForm::NotSignedException();
	else
	{
		std::ofstream outfile ((this->_target + "_shrubbery").c_str());

		for (int i = 0; i < 5; i++)
		{
			outfile <<
			"         v" << std::endl <<
			"        >X<" << std::endl <<
			"         A" << std::endl <<
			"        d$b" << std::endl <<
			"      .d\\$$b." << std::endl <<
			"    .d$i$$\\$$b." << std::endl <<
			"       d$$@b" << std::endl <<
			"      d\\$$$ib" << std::endl <<
			"    .d$$$\\$$$b" << std::endl <<
			"  .d$$@$$$$\\$$ib." << std::endl <<
			"      d$$i$$b" << std::endl <<
			"     d\\$$$$@$b" << std::endl <<
			"  .d$@$$\\$$$$$@b." << std::endl <<
			".d$$$$i$$$\\$$$$$$b." << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
		std::endl;
		}
		outfile.close();
	}
}
