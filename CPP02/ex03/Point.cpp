/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:31:15 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:31:16 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{

}

Point::Point( const Fixed a, const Fixed b ) : x(a), y(b)
{

}

Point::Point( Point const& obj )
{
	*this = obj;
}

Point&  Point::operator=( const Point& obj )
{
	this->x = obj.x;
	this->y = obj.y;
	return *this;
}

float	Point::getX( void ) const
{
	return this->x.toFloat();
}

float	Point::getY( void ) const
{
	return this->y.toFloat();
}

Point::~Point( void )
{

}

std::ostream&	operator<<(std::ostream& os, const Point& obj)
{
	os << "x = " << obj.getX() << std::endl;
	os << "y = " << obj.getY() << std::endl;
	return os;
}
