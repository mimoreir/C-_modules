/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:50:20 by mimoreir          #+#    #+#             */
/*   Updated: 2024/07/06 11:18:45 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./converter <thing to convert>" << std::endl;
		return 0;
	}

	Converter::convert(argv[1]);
	
	return 0;
}
