/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:12:08 by mimoreir          #+#    #+#             */
/*   Updated: 2023/10/28 15:05:15 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default Constructor Called" << std::endl;
	this->numberValue = 0;
}

Fixed::Fixed( Fixed const& obj )
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}

Fixed&	Fixed::operator=( Fixed const& obj )
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->numberValue = obj.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor Called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits Member Function Called" << std::endl;
	return (this->numberValue);
}

void	Fixed::setRawBits ( int const raw )
{
	this->numberValue = raw;
}
