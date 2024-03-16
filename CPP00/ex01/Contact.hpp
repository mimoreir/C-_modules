/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:18:52 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 14:18:53 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		Contact(void);
		Contact(std::string FN, std::string LN, std::string NN, std::string NB, std::string DS);
		~Contact(void);
		std::string	GetFirst(void);
		std::string	GetLast(void);
		std::string	GetNick(void);
		std::string	GetNumber(void);
		std::string	GetSecret(void);
		void		Display(void);
		std::string FormatString(std::string str);
};

#endif
