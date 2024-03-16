/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:12:28 by mimoreir          #+#    #+#             */
/*   Updated: 2023/10/28 15:05:48 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cstdlib>
# include <cmath>

class Fixed
{
	private:
		int					numberValue;
		static const int	fracBits = 8;

	public:
		Fixed( void );
		Fixed( Fixed const& obj );
		Fixed( int const n );
		Fixed( float const n );

		Fixed& operator=( Fixed const& obj );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		~Fixed();

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
