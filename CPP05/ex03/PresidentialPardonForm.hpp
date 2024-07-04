/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:43:12 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/01 10:34:37 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string str);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm();
		
		PresidentialPardonForm &operator=(PresidentialPardonForm &src);
		void	execute(const Bureaucrat &executer) const;
};

#endif