/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:08:38 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:08:39 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPtr = &str;
	std::string	&stringRef = str;

	std::cout << "Adress of the string: " << &str << std::endl;
	std::cout << "stringPtr holds: " << stringPtr << std::endl;
	std::cout << "stringRef holds: " << stringRef << std::endl << std::endl;

	std::cout << "String value: " << str << std::endl;
	std::cout << "stringPtr points to: " << *stringPtr << std::endl;
	std::cout << "stringRef point to; " << stringRef << std::endl;
	return 0;
}
