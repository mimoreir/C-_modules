/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <mimoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:31:03 by mimoreir          #+#    #+#             */
/*   Updated: 2023/11/03 12:31:04 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

static Fixed	abs(Fixed n)
{
	if ( n < 0 )
		return n * -1;
	return n;
}

static Fixed	area( Point const a, Point const b, Point const c)
{
	return (((a.getX() * (b.getY() - c.getY()) +
			(b.getX() * (a.getY() - c.getY())) +
			(c.getX() * (a.getY() - b.getY()))))/2);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed abcArea = abs(area( a, b, c ));
	Fixed pabArea = abs(area( point, a, b ));
	Fixed pacArea = abs(area( point, a, c ));
	Fixed pbcArea = abs(area( point, b, c ));

	if(pabArea == 0 | pacArea == 0 | pbcArea == 0)
		return false;
	return ( abcArea == pabArea + pacArea + pbcArea );
}
