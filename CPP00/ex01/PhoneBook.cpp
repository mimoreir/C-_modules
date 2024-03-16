/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:19:01 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 14:19:02 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->Index = 0;
	this->max = 8;
}

PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::Add(void)
{
	std::string FN, LN, NN, NB, DS;

	std::cout << "Insert First Name" << std::endl;
	std::getline(std::cin, FN);
	std::cout << "Insert Last Name" << std::endl;
	std::getline(std::cin, LN);
	std::cout << "Insert Nickame" << std::endl;
	std::getline(std::cin, NN);
	std::cout << "Insert Phone Number" << std::endl;
	std::getline(std::cin, NB);
	std::cout << "Insert Darkest Secret" << std::endl;
	std::getline(std::cin, DS);

	this->Contacts[this->Index++ % max] = Contact(FN, LN, NN, NB, DS);
	std::cout << "--------------------------------------------------------------------" << std::endl;
}

void	PhoneBook::Display(void)
{
	std::string	str;

	std::cout << "|  Index   |First Name|Last Name |  Nickname|" << std::endl;
	for (int i = 0; i < max; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		str = this->Contacts[i].FormatString(this->Contacts[i].GetFirst());
		std::cout << std::setw(10) << str << "|";
		str = this->Contacts[i].FormatString(this->Contacts[i].GetLast());
		std::cout << std::setw(10) << str << "|";
		str = this->Contacts[i].FormatString(this->Contacts[i].GetNick());
		std::cout << std::setw(10) << str << "|" << std::endl;
	}
	std::cout << "--------------------------------------------------------------------" << std::endl;
}

void	PhoneBook::Search(void)
{
	int	input;

	if (this->Index == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		std::cout << "--------------------------------------------------------------------" << std::endl;
		return ;
	}
	Display();
	std::cout << "Select a Index to see the Contact" << std::endl;
	std::cin >> input;
	if (input >= this->Index || (input < 0 || input > 7))
		std::cout << "Wrong Index Number" << std::endl;
	else
		this->Contacts[input].Display();
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cin.clear();
	std::cin.ignore();
}
