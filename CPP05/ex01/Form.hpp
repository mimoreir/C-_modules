#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool				isItSigned;
		const int			gradeToSign;
		const int			gradeToExe;
		Form( void );
	public:
		Form( std::string name, int grade, int exe );
		Form( cont Form& rhs );
		~Form( void );

		Form& operator=( const Form& rhs);

		std::string getName() const;
		bool		getIsItSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExe() const;

		void		beSigned(const Bureaucrat& someBur );

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