/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 08:55:55 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/30 10:04:17 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &copy);
		Point &operator=(Point const &copy);
		Fixed	getx() const;
		Fixed	gety() const;
		bool operator==(Point const &copy) const;
		~Point();

	private:
		Fixed const _x;
		Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif