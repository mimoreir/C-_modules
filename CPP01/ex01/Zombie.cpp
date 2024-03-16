/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:08:19 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:08:20 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{

}

Zombie::~Zombie( void )
{
	std::cout << this->name << " died" << std::endl;
}

Zombie::Zombie ( std::string str )
{
	this->name = str;
}

void    Zombie::announce ( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string str )
{
	this->name = str;
}
