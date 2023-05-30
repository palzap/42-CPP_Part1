/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:16:00 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/30 08:39:13 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*--------------------CONSTRUCTORS/DESTRUCTORS--------------------*/
Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const &copy) : _value(copy._value)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_value = copy._value;
	}
	return (*this);
}

Fixed::Fixed(const int nb)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = nb * (1 << Fixed::_bits);
}

Fixed::Fixed(const float nb)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_value = nb * (1 << Fixed::_bits);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/*--------------------MEMBER FUNCTIONS--------------------*/

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int Fixed::toInt(void) const
{
	return (this->_value / (1 << Fixed::_bits));
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / static_cast<float>(1 << Fixed::_bits));
}

/*--------------------COMPARE OPERATORS--------------------*/

bool Fixed::operator>(Fixed const &copy) const
{
	// std::cout << "> comparison operator called" << std::endl;
	if (this->toFloat() > copy.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(Fixed const &copy) const
{
	// std::cout << ">= comparison operator called" << std::endl;
	if (this->toFloat() >= copy.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(Fixed const &copy) const
{
	// std::cout << "< comparison operator called" << std::endl;
	if (this->toFloat() < copy.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(Fixed const &copy) const
{
	// std::cout << "<= comparison operator called" << std::endl;
	if (this->toFloat() <= copy.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator==(Fixed const &copy) const
{
	// std::cout << "== comparison operator called" << std::endl;
	if (this->toFloat() == copy.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(Fixed const &copy) const
{
	// std::cout << "!= comparison operator called" << std::endl;
	if (this->toFloat() != copy.toFloat())
		return (true);
	else
		return (false);
}

/*--------------------ARITHMETIC OPERATORS--------------------*/

Fixed Fixed::operator+(Fixed const &f1)
{
	// std::cout << "+ arithmetic operator called" << std::endl;
	return Fixed(this->toFloat() + f1.toFloat());
}

Fixed Fixed::operator-(Fixed const &f1)
{
	// std::cout << "- arithmetic operator called" << std::endl;
	return Fixed(this->toFloat() - f1.toFloat());
}

Fixed Fixed::operator*(Fixed const &f1)
{
	// std::cout << "* arithmetic operator called" << std::endl;
	return Fixed(this->toFloat() * f1.toFloat());
}

Fixed Fixed::operator/(Fixed const &f1)
{
	// std::cout << "/ arithmetic operator called" << std::endl;
	return Fixed(this->toFloat() / f1.toFloat());
}

/*--------------------INCREMENT/DECREMENT OPERATORS--------------------*/

Fixed Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	this->_value += 1;
	return (temp);
}

Fixed Fixed::operator--(void)
{
	this->_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	this->_value -= 1;
	return (temp);
}

/*--------------------MIN/MAX--------------------*/

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1._value < f2._value)
		return (f1);
	else
		return (f2);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	else
		return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1._value > f2._value)
		return (f1);
	else
		return (f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	else
		return (f2);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}