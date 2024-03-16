/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:10:17 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:10:18 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon( std::string str );
		~Weapon();
		void	setType( std::string str );
		std::string	getType( void ) const;
		Weapon& operator=(const Weapon& right);
};

#endif
