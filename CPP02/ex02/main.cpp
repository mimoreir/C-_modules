/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:12:32 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:01:58 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int	main( void )
{
	Fixed	a;
	Fixed	b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "---Increments and decrements--" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "---------Max and Min----------" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "---------Comparison-----------" << std::endl;
	if (a < b)
		std::cout << "A is lesser than B" << std::endl;
	if (a != b)
		std::cout << "A and B are different!" << std::endl;
	if (a == a)
		std::cout << "A is equal to A" << std::endl;
	return 0;
}
