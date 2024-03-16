/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:33:05 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:33:06 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{

}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->name << " was destroyed." << std::endl;
}

DiamondTrap::DiamondTrap( std::string str )
{
	this->name = str;
	this->ClapTrap::name = str + "_clap_name";

	this->health = 100;
	this->energy = 50;
	this->atkDamage = 30;

	std::cout << "Diamond Trap " << this->name << " was created." << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "Hello, I'm " << this->name << " DiamondTrap" << std::endl;
	std::cout << "My ClapName is " << this->ClapTrap::name << std::endl;
}
