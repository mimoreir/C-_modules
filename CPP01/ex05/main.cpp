/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:11:28 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:11:29 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl	h;
	std::string input;

	do
	{
		std::cout << "Choose message level: ";
		std::cout << "(DEBUG INFO WARNING ERROR)" << std::endl;
		std::getline(std::cin, input);
		h.complain(input);
	} while (input != "EXIT");

	return EXIT_SUCCESS;
}
