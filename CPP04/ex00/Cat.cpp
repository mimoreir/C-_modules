/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:33:41 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:33:42 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat constructer called." << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miau!" << std::endl;
}
