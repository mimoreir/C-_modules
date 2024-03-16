/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:33:07 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:33:08 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string str );
		~DiamondTrap( void );

		using	ScavTrap::attack;
		void	whoAmI();
};

#endif
