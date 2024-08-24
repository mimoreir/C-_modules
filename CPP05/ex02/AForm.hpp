/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:51:04 by mimoreir          #+#    #+#             */
/*   Updated: 2024/08/24 13:47:43 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				isItSigned;
		const int			gradeToSign;
		const int			gradeToExe;
	public:
		AForm(const std::string name, int grade, int exe);
		AForm(const AForm& rhs);
		virtual ~AForm( void );

		AForm& operator=( const AForm& rhs);

		std::string getName() const;
		bool		getIsItSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExe() const;

		void		beSigned(Bureaucrat &someBur);

		virtual void        execute( const Bureaucrat& executor ) const = 0;

		class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too high"; }
		};

		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too low"; }
		};
	
		class NotSignedException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Form not signed"; }
		};
};

std::ostream& operator<<( std::ostream& os, const AForm& rhs );

#endif //FORM
