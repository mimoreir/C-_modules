/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:50:56 by mimoreir          #+#    #+#             */
/*   Updated: 2024/06/30 17:57:53 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string str, int grade, int exe) : name(str), isItSigned(false), gradeToSign(grade), gradeToExe(exe)
{
	if (grade > 150 || exe > 150)
		throw AForm::GradeTooLowException();
	if (grade < 0 || exe < 0)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &rhs) : name(rhs.getName()), isItSigned(rhs.getIsItSigned()), gradeToSign(rhs.getGradeToSign()), gradeToExe(rhs.getGradeToExe())
{
}

AForm::~AForm(void)
{

}

AForm &AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
	{
		this->isItSigned = rhs.getIsItSigned();
	}
	return *this;
}

std::string AForm::getName() const
{
	return name;
}

bool AForm::getIsItSigned() const
{
	return isItSigned;
}

int AForm::getGradeToSign() const
{
	return gradeToSign;
}

int AForm::getGradeToExe() const
{
	return gradeToExe;
}

void AForm::beSigned(Bureaucrat &someBur)
{
	if (someBur.getGrade() > gradeToSign)
		throw AForm::GradeTooLowException();
	else
		isItSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &rhs)
{
    os << rhs.getName() << std::endl << "Sign? : ";
	if (rhs.getIsItSigned() == true)
		os << "Yes\n";
	else
		os << "No\n";
	os << "Grade needed to sign: " << rhs.getGradeToSign() << std::endl;
	return os;
}
