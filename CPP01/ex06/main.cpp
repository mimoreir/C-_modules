/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:11:48 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:11:49 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Number of arguments invalid";
		std::cerr << std::endl;
		return EXIT_FAILURE;
	}
	else
	{
		Harl	h;
		h.complain(argv[1]);
	}
	return EXIT_SUCCESS;
}
