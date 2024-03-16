/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:09:57 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:09:58 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB( void )
{

}

void    HumanB::attack( void )
{
    if (!this->weapon)
        std::cout << this->name << "can't attack, no weapon" << std::endl;
    else
    {
        std::cout << this->name << " attacks with their ";
	    std::cout << this->weapon->getType() << std::endl;
    }
}

void    HumanB::setWeapon( Weapon& weapon )
{
    this->weapon = &weapon;
}
