/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:12:28 by mimoreir          #+#    #+#             */
/*   Updated: 2023/10/28 15:08:04 by mimoreir         ###   ########.fr       */
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

		Fixed&	operator=( Fixed const& obj );
		Fixed	operator+( Fixed const& obj ) const;
		Fixed	operator-( Fixed const& obj ) const;
		Fixed	operator*( Fixed const& obj ) const;
		Fixed	operator/( Fixed const& obj ) const;

		bool	operator>( const Fixed &obj ) const ;
		bool	operator<( const Fixed &obj) const ;
		bool	operator>=( const Fixed &obj ) const ;
		bool	operator<=( const Fixed &obj ) const ;
		bool	operator==( const Fixed &obj ) const ;
		bool	operator!=( const Fixed &obj ) const ;

		Fixed&	operator--( void ); //before
		Fixed	operator--( int ); //after
		Fixed&	operator++( void );
		Fixed	operator++( int );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed&	min( Fixed &a, Fixed &b );
		static const Fixed&	min( const Fixed &a, const Fixed &b );
		static Fixed&	max( Fixed &a, Fixed &b );
		static const Fixed&	max( const Fixed &a, const Fixed &b );

		~Fixed();

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
