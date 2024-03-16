/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:31:38 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:31:39 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main( void )
{
    ClapTrap    a("Miguel");
    ClapTrap    b("Dummy");

    a.attack("Dummy");
    b.takeDamage(0);
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
    return 0;
}
