/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:34:25 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 15:16:13 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;

	public:
		Cat( void );
		Cat( const Cat& obj );
		~Cat( void );
		Cat&		operator=( const Cat& obj );
		void		makeSound( void ) const;
		void		printIdea( int i ) const;
};

#endif //CAT_HPP
