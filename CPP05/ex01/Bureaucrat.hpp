/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:41:06 by mimoreir          #+#    #+#             */
/*   Updated: 2024/06/20 10:40:24 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
private:
	const std::string name;
	int				  grade;
	Bureaucrat( void );
	
public:
	Bureaucrat( std::string n, int g );
	Bureaucrat( const Bureaucrat &x );

	Bureaucrat& operator=( const Bureaucrat& rhs );
	
	~Bureaucrat(void);

	std::string getName( void ) const;
	int			getGrade( void ) const;

	void		incrementGrade( void );
	void		decrementGrade( void );

	//void		signForm( bool couldSign , Form& form);
	
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too high"; }
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too low"; }
	};
};

std::ostream   &operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif //BUREAUCRAT_HPP