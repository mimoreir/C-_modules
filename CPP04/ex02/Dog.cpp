/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:34:28 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 15:16:00 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog constructer called." << std::endl;
}

Dog::Dog( const Dog& obj ) : Animal("Dog")
{
	*this = obj;
	std::cout << "Dog copy contructor called." << std::endl;
}

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog&	Dog::operator=( const Dog& obj )
{
	if ( this != &obj )
	{
		this->brain = obj.brain;
	}
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "AU AU!" << std::endl;
}

void	Dog::printIdea( int i ) const
{
	std::cout << brain->printIdea(i) << std::endl;
}
