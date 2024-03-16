/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:31:44 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:31:45 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{

}

ClapTrap::ClapTrap( std::string str )
{
	this->name = str;
	this->health = 10;
	this->energy = 10;
	this->atkDamage = 0;
	std::cout << "ClapTrap " << this->name << " was created." << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->name << " was destroyed." << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{
	if ( this->energy <= 0 || this->health <= 0 )
	{
		std::cout << "ClapTrap " << this->name << " can't attack!" << std::endl;
		return ;
	}
	this->energy--;
	std::cout << "ClapTrap " << this->name << " attacks " << target;
	std::cout << ", causing " << this->atkDamage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if ( this->energy <= 0 || this->health <= 0 )
	{
		std::cout << "ClapTrap " << this->name << " can't heal!" << std::endl;
		return ;
	}
	this->health += amount;
	this->energy--;
	std::cout << "ClapTrap " << this->name << " heals " << amount;
	std::cout << " points of health!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if ( this->health <= 0 )
	{
		std::cout << "ClapTrap " << this->name << " is already dead";
		std::cout << ", please stop!!" << std::endl;
		return ;
	}
	this->health -= amount;
	if ( this->health <= 0 )
		this->health = 0;
	std::cout << "ClapTrap " << this->name << " loses " << amount;
	std::cout << " points of health!" << std::endl;
}
