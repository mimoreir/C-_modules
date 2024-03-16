/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:22:58 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 13:45:51 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <iomanip>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string str );
		virtual ~WrongAnimal( void );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif
