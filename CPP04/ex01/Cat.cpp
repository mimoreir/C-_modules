/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:34:23 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 15:00:04 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat constructer called." << std::endl;
}

Cat::Cat( const Cat& obj ) : Animal("Cat")
{
	*this = obj;
}

Cat::~Cat( void )
{
	delete this->brain;
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miau!" << std::endl;
}

Cat&	Cat::operator=( const Cat& obj )
{
	if ( this != &obj )
	{
		this->brain = obj.brain;
	}
	return *this;
}

void	Cat::printIdea( int i ) const
{
	std::cout << brain->printIdea(i) << std::endl;
}
