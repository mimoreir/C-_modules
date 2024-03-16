/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:31:52 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:31:53 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main( void )
{
    ScavTrap    a("Miguel");
    ScavTrap    b("Dummy");

    a.attack("Dummy");
    b.takeDamage(20);
    a.attack("Dummy");
    a.attack("Dummy");
    a.attack("Dummy");
    a.attack("Dummy");
    a.attack("Dummy");
    a.attack("Dummy");
    a.attack("Dummy");
    a.attack("Dummy");
    a.attack("Dummy");
    a.attack("Dummy");
    a.beRepaired(10);
    b.takeDamage(9);
    b.beRepaired(9);
    a.takeDamage(10);
    b.attack("Miguel");
    a.takeDamage(10);
    b.guardGate();
    return 0;
}
