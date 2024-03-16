/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:08:04 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:08:05 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie( void );
		~Zombie( void );
		Zombie ( std::string str );
		void announce( void );
};
void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
