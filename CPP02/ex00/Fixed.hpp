/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:12:12 by mimoreir          #+#    #+#             */
/*   Updated: 2023/09/23 15:12:13 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cstdlib>

class Fixed
{
	private:
		int					numberValue;
		static const int	fracBits = 8;

	public:
		Fixed( void );
		Fixed( Fixed const& obj );
		Fixed& operator=( Fixed const& obj );
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		~Fixed();

};

#endif
