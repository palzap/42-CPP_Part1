/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:21:05 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/30 11:24:59 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool edge_match(Point const a, Point const b, Point const point)
{
	Fixed minABx = Fixed::min(a.getx(), b.getx());
	Fixed maxABx = Fixed::max(a.getx(), b.getx());
	Fixed minABy = Fixed::min(a.gety(), b.gety());
	Fixed maxABy = Fixed::max(a.gety(), b.gety());

	if (point.getx() > minABx && point.getx() < maxABx && point.gety() > minABy && point.gety() < maxABy)
		return (true);
	return (false);
}

bool vertice_edge_match(Point const a, Point const b, Point const c, Point const point)
{
	if (a == point || b == point || c == point)
	{
		std::cout << "The point is a vertice" << std::endl;
		return (true);
	}
	if (edge_match(a, b, point) || edge_match(a, c, point) || edge_match(c, b, point))
	{
		std::cout << "The point is within an edge" << std::endl;
		return (true);
	}
	return (false);
}

Fixed triangle_area(Point const a, Point const b, Point const c)
{
	Fixed area;

	Fixed a1 = (a.getx() * b.gety() + b.getx() * c.gety() + c.getx() * a.gety());
	Fixed a2 = (b.getx() * a.gety() + c.getx() * b.gety() + a.getx() * c.gety());
	area = std::abs(a1.toFloat() - a2.toFloat()) / 2;
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (vertice_edge_match(a, b, c, point))
		return (false);

	Fixed ABC = triangle_area(a, b, c);
	Fixed ABP = triangle_area(a, b, point);
	Fixed ACP = triangle_area(a, c, point);
	Fixed BCP = triangle_area(b, c, point);

	if (ABC == ABP + ACP + BCP)
		return (true);
	return (false);
}