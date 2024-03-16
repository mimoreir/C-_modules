/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:33:10 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:33:11 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap( void )
{

}

FragTrap::FragTrap( const std::string str ) : ClapTrap(str)
{
	this->health = 100;
	this->energy = 100;
	this->atkDamage = 30;
	std::cout << "FragTrap " << this->name << " was created." << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->name << " was destroyed." << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->name << " request a High Five." << std::endl;
}
