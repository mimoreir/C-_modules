/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:51:04 by mimoreir          #+#    #+#             */
/*   Updated: 2024/08/24 13:46:41 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				isItSigned;
		const int			gradeToSign;
		const int			gradeToExe;
	public:
		Form(const std::string name, int grade, int exe);
		Form(const Form& rhs);
		~Form( void );

		Form& operator=( const Form& rhs);

		std::string getName() const;
		bool		getIsItSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExe() const;

		void		beSigned(Bureaucrat &someBur);

		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too high"; }
	};

		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too low"; }
	};
};

std::ostream& operator<<( std::ostream& os, const Form& rhs );

#endif //FORM
