/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:33:33 by mimoreir          #+#    #+#             */
/*   Updated: 2024/06/30 17:47:05 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
}

Bureaucrat::Bureaucrat( std::string n, int g ) : name(n), grade(g)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& rhs ) : name(rhs.name), grade(rhs.grade)
{

}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs )
{
	if (this != &rhs)
	{
		this->grade = rhs.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat( void )
{

}

std::string Bureaucrat::getName( void ) const
{
	return name;
}

int Bureaucrat::getGrade( void ) const
{
	return grade;
}

void    Bureaucrat::incrementGrade( void )
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void    Bureaucrat::decrementGrade( void )
{
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned( *this );
		std::cout << name << " signed " <<  form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << name << " couldn’t sign " << form.getName() << " because " << e.what() << '\n';
	}	
}