/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:35:56 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 14:04:57 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
}
