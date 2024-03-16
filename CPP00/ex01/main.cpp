/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:18:56 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 14:18:57 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void    menu(void)
{
	std::cout << "ADD - to add a new contact" << std::endl;
	std::cout << "SEARCH - to display a contact" << std::endl;
	std::cout << "EXIT - to exit the Phone Book" << std::endl;
}

int main(void)
{
	PhoneBook List;
	std::string	UserInput;

	while (1)
	{
		menu();
		std::cout << "--------------------------------------------------------------------" << std::endl;
		std::getline(std::cin, UserInput);
		if (UserInput == "ADD")
		{
			List.Add();
		}
		if (UserInput == "SEARCH")
			List.Search();
		if (UserInput == "EXIT")
			break ;
	}
	return 0;
}
