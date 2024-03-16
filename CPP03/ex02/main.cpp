/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:32:22 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:32:23 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main( void )
{
	ClapTrap    c("Ze");
	ScavTrap    a("Miguel");
	FragTrap    b("Dummy");

	a.guardGate();
	b.highFivesGuys();
	return 0;
}
