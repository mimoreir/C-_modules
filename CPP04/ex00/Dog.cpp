/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:33:46 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:33:47 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog constructer called." << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "AU AU!" << std::endl;
}
