/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:33:33 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:33:34 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal( void )
{
	this->type = "Unknown";
	std::cout << "An animal was created." << std::endl;
}

Animal::Animal( std::string str )
{
	this->type = str;
}


Animal::~Animal( void )
{
	std::cout << "An animal was destroyed." << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal makeSound called" << std::endl;
}
