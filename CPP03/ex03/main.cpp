/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:33:15 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:33:16 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main( void )
{
	ClapTrap    c("Ze");
	ScavTrap    a("Miguel");
	FragTrap    b("Dummy");
	DiamondTrap d("Balrog");

	a.guardGate();
	b.highFivesGuys();
	c.attack("Dummy");
	d.attack("Dummy");
	d.whoAmI();
	return 0;
}
