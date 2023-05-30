/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:05:28 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/30 08:02:59 by pealexan         ###   ########.fr       */
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

	bool operator>(Fixed const &copy) const;
	bool operator>=(Fixed const &copy) const;
	bool operator<(Fixed const &copy) const;
	bool operator<=(Fixed const &copy) const;
	bool operator==(Fixed const &copy) const;
	bool operator!=(Fixed const &copy) const;

	Fixed operator+(Fixed const &f1);
	Fixed operator-(Fixed const &f1);
	Fixed operator*(Fixed const &f1);
	Fixed operator/(Fixed const &f1);

	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);

	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed const &min(Fixed const &f1, Fixed const &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static Fixed const &max(Fixed const &f1, Fixed const &f2);
	~Fixed();

private:
	int _value;
	static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
