/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:05:28 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/29 08:58:54 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed &operator=(Fixed const &copy);
	Fixed(const int nb);
	Fixed(const float nb);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	~Fixed();

private:
	int _value;
	static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
