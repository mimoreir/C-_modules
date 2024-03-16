/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:34:33 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 14:50:42 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		Dog( void );
		Dog( const Dog& obj );
		~Dog( void );
		Dog&	operator=( const Dog& obj );
		void	makeSound( void ) const;
		void	printIdea( int i ) const;
};

#endif //DOG_HPP
