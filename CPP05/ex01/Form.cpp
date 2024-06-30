/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:50:56 by mimoreir          #+#    #+#             */
/*   Updated: 2024/06/30 17:50:59 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string str, int grade, int exe) : name(str), isItSigned(false), gradeToSign(grade), gradeToExe(exe)
{
	if (grade > 150 || exe > 150)
		throw Form::GradeTooLowException();
	if (grade < 0 || exe < 0)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &rhs) : name(rhs.getName()), isItSigned(rhs.getIsItSigned()), gradeToSign(rhs.getGradeToSign()), gradeToExe(rhs.getGradeToExe())
{
}

Form::~Form(void)
{

}

Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->isItSigned = rhs.getIsItSigned();
	}
	return *this;
}

std::string Form::getName() const
{
	return name;
}

bool Form::getIsItSigned() const
{
	return isItSigned;
}

int Form::getGradeToSign() const
{
	return gradeToSign;
}

int Form::getGradeToExe() const
{
	return gradeToExe;
}

void Form::beSigned(Bureaucrat &someBur)
{
	if (someBur.getGrade() > gradeToSign)
		throw Form::GradeTooLowException();
	else
		isItSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &rhs)
{
    os << rhs.getName() << std::endl << "Sign? : ";
	if (rhs.getIsItSigned() == true)
		os << "Yes\n";
	else
		os << "No\n";
	os << "Grade needed to sign: " << rhs.getGradeToSign() << std::endl;
	return os;
}
