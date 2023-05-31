/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:21:05 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/31 10:17:55 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed triangle_area(Point const a, Point const b, Point const c)
{
	Fixed area;

	area = (a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety())) / 2;
	return (std::abs(area.toFloat()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed ABC = triangle_area(a, b, c);
	if (ABC == 0)
	{
		std::cout << "Not a valid triangle" << std::endl;
		exit(1);
	}
	Fixed PAB = triangle_area(a, b, point);
	Fixed PAC = triangle_area(a, c, point);
	Fixed PBC = triangle_area(b, c, point);

	Fixed u = PAB / ABC;
  	Fixed v = PAC / ABC;
	Fixed w = PBC / ABC;
	if (u > 0 && u < 1 && v > 0 && v < 1 && w > 0 && w < 1)
    	return (true);
	else if (u == 0 || u == 1 || v == 0 || v == 1 || w == 0 || w == 1)
	{
    	std::cout << "Point is on the edge or a vertex" << std::endl;
    	return (false);
	} 
	else 
    	return (false);
}