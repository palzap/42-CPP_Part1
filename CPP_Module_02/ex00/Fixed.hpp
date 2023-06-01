/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:05:28 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 08:19:18 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed &copy);
	Fixed &operator=(Fixed &copy);
	~Fixed();
	int getRawBits(void);
	void setRawBits(int const raw);

private:
	int _value;
	static const int _bits = 8;
};

#endif
