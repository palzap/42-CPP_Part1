/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 08:59:37 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/30 14:29:44 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(Point const &copy) : _x(copy._x), _y(copy._y)
{
}

Point &Point::operator=(Point const &copy)
{
	if (this != &copy)
	{
		(Fixed)this->_x = copy._x;
		(Fixed)this->_y = copy._y;
	}
	return (*this);
}

Point::~Point()
{
}

Fixed	Point::getx() const
{
	return (Fixed(this->_x));
}

Fixed	Point::gety() const
{
	return (Fixed(this->_y));
}

bool Point::operator==(Point const &copy) const
{
	if (this->_x == copy._x && this->_y == copy._y)
		return (true);
	else
		return (false);
}