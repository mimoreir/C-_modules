/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:32:30 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:32:31 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{

}

ScavTrap::ScavTrap( const std::string str ) : ClapTrap(str)
{
	this->health = 100;
	this->energy = 50;
	this->atkDamage = 20;
	std::cout << "ScavTrap " << this->name << " was created." << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->name << " was destroyed." << std::endl;
}

void	ScavTrap::attack( const std::string& target)
{
	if ( this->energy <= 0 || this->health <= 0 )
	{
		std::cout << "ScavTrap " << this->name << " can't attack!" << std::endl;
		return ;
	}
	this->energy--;
	std::cout << "ScavTrap " << this->name << " attacks " << target;
	std::cout << ", causing " << this->atkDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " is now on Gate Keeper Mode!" << std::endl;
}
