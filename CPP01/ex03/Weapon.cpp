/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:10:14 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:10:15 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{

}

Weapon::Weapon( std::string str )
{
	this->type = str;
}

Weapon::~Weapon( void )
{

}

void    Weapon::setType( std::string str )
{
	this->type = str;
}

std::string Weapon::getType( void ) const
{
	return (this->type);
}

Weapon& Weapon::operator=(const Weapon& right)
{
	if (this == &right)
		return (*this);
	this->type = right.type;
	return (*this);
}
