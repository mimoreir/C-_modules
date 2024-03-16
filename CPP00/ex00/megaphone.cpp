/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:18:41 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 14:18:42 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char const *argv[])
{
	int	i = 1;
	int	j = 0;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			while (argv[i][j])
			{
				std::cout << (char)std::toupper(argv[i][j++]);
			}
			i++;
			j = 0;
		}
		std::cout << std::endl;
	}
	return (0);
}
