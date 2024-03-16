/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:22:53 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 14:04:18 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	this->type = "Unknown";
	std::cout << "WrongAnimal created." << std::endl;
}

WrongAnimal::WrongAnimal( std::string str )
{
	this->type = str;
	std::cout << "WrongAnimal constructer called." << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal makeSound called." << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}
