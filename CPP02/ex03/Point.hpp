/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:31:20 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:31:21 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed	x;
		Fixed	y;
	public:
		Point( void );
		Point( const Fixed a, const Fixed b );
		Point( Point const& obj );
		Point&	operator=( const Point& obj );
		float	getX( void ) const;
		float	getY( void ) const;
		~Point();
};

std::ostream&	operator<<(std::ostream& os, const Point& obj);
bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
