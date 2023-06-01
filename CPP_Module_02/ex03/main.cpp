/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 08:54:51 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 08:18:45 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	{
		Point const a(0, 0);
		Point const b(5, 5);
		Point const c(0, 10);
		Point const d(2, 3);

		if (bsp(a, b, c, d))
			std::cout << "The point is inside the triangle" << std::endl;
		else
			std::cout << "The point is outside the triangle" << std::endl;
	}
	{
		Point const a(0, 0);
		Point const b(5, 5);
		Point const c(0, 10);
		Point const d(0, 2);

		if (bsp(a, b, c, d))
			std::cout << "The point is inside the triangle" << std::endl;
		else
			std::cout << "The point is outside the triangle" << std::endl;
	}
	{
		Point const a(-1, -1);
		Point const b(5, 5);
		Point const c(0, 10);
		Point const d(0, 0);

		if (bsp(a, b, c, d))
			std::cout << "The point is inside the triangle" << std::endl;
		else
			std::cout << "The point is outside the triangle" << std::endl;
	}
	return (0);
}