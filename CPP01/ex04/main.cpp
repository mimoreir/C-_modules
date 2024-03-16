/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:10:47 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:10:48 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sed2.hpp"

int	main(int argc, char *argv[])
{

	if (argc != 4)
	{
		std::cerr << "Number of arguments invalid!" << std::endl;
		return 1;
	}
	else
	{
		Sed2 sed2(argv[1]);
		sed2.replace(argv[2], argv[3]);
	}
	return 0;
}
