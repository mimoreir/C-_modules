/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:34:17 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 14:58:56 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructor called." << std::endl;
	fillIdeas();
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called." << std::endl;
}

void	Brain::fillIdeas( void )
{
	this->ideas[0] = "Eat";
	this->ideas[1] = "Sleep";
	this->ideas[2] = "Play";
}

Brain::Brain( const Brain& obj )
{
	*this = obj;
	std::cout << "Brain copy constructor called." << std::endl;
}

std::string	Brain::printIdea( int i ) const
{
	return(this->ideas[i]);
}

Brain& Brain::operator=( const Brain& obj )
{
	if ( this != &obj)
	{
		this->ideas[0] = obj.ideas[0];
		this->ideas[1] = obj.ideas[1];
		this->ideas[2] = obj.ideas[2];
	}
	return *this;
}
