/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:18:49 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 14:18:50 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::Contact(std::string FN, std::string LN, std::string NN, std::string NB, std::string DS)
{
	this->FirstName = FN;
	this->LastName = LN;
	this->NickName = NN;
	this->PhoneNumber = NB;
	this->DarkestSecret = DS;
}

Contact::~Contact(void)
{

}

void	Contact::Display(void)
{
	std::cout << "Fist Name: " << this->GetFirst() << std::endl;
	std::cout << "Last Name: " << this->GetLast() << std::endl;
	std::cout << "Nickname: " << this->GetNick() << std::endl;
	std::cout << "Number: " << this->GetNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->GetSecret() << std::endl;
}

std::string	Contact::FormatString(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

std::string	Contact::GetFirst(void)
{
	return (this->FirstName);
}

std::string	Contact::GetLast(void)
{
	return (this->LastName);
}

std::string	Contact::GetNick(void)
{
	return (this->NickName);
}

std::string	Contact::GetNumber(void)
{
	return (this->PhoneNumber);
}

std::string	Contact::GetSecret(void)
{
	return (this->DarkestSecret);
}
