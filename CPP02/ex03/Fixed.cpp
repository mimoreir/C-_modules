/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:12:25 by mimoreir          #+#    #+#             */
/*   Updated: 2023/10/28 15:07:48 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed( void ) : numberValue(0)
{
	//std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed( Fixed const& obj )
{
	//std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}

Fixed::Fixed( int const n ) : numberValue( n << fracBits )
{
	//std::cout << "Int Constructor Called" << std::endl;
	//std::cout << n << std::endl << numberValue << std::endl;
}

Fixed::Fixed( const float n ) : numberValue( roundf( n * (1 << fracBits )))
{
	//std::cout << "Float Constructor Called" << std::endl;
	//std::cout << n << std::endl << numberValue << std::endl;
}

Fixed&	Fixed::operator=( Fixed const& obj )
{
	//std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->numberValue = obj.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor Called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits Member Function Called" << std::endl;
	return (this->numberValue);
}

void	Fixed::setRawBits ( int const raw )
{
	this->numberValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return static_cast<float>(this->getRawBits()) / (1 << fracBits);
}

int	Fixed::toInt( void ) const
{
	return this->numberValue >> fracBits;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}

Fixed	Fixed::operator+( Fixed const& obj ) const
{
	return (Fixed (this->toFloat() + obj.toFloat()));
}

Fixed	Fixed::operator-( Fixed const& obj ) const
{
	return (Fixed (this->toFloat() - obj.toFloat()));
}

Fixed	Fixed::operator*( Fixed const& obj ) const
{
	return (Fixed (this->toFloat() * obj.toFloat()));
}

Fixed	Fixed::operator/( Fixed const& obj ) const
{
	return (Fixed (this->toFloat() / obj.toFloat()));
}

bool	Fixed::operator>( const Fixed &obj ) const
{
	return (this->getRawBits() > obj.getRawBits());
}

bool	Fixed::operator<( const Fixed &obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool	Fixed::operator>=( const Fixed &obj ) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool	Fixed::operator<=( const Fixed &obj ) const
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool	Fixed::operator==( const Fixed &obj ) const
{
	return (this->getRawBits() == obj.getRawBits());
}

bool	Fixed::operator!=( const Fixed &obj ) const
{
	return (this->getRawBits() != obj.getRawBits());
}

Fixed&	Fixed::operator--( void )
{
	--this->numberValue;
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp( *this );

	tmp.numberValue = this->numberValue--;
	return tmp;
}

Fixed&	Fixed::operator++( void )
{
	++this->numberValue;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp( *this );
	tmp.numberValue = this->numberValue++;
	return *this;
}

Fixed&	Fixed::min( Fixed &a, Fixed &b )
{
	if (a < b)
		return a;
	return b;
}

const Fixed&	Fixed::min( const Fixed &a, const Fixed &b )
{
	if (a < b)
		return a;
	return b;
}

Fixed&	Fixed::max( Fixed &a, Fixed &b )
{
	if (a > b)
		return a;
	return b;
}

const Fixed&	Fixed::max( const Fixed &a, const Fixed &b )
{
	if (a > b)
		return a;
	return b;
}
