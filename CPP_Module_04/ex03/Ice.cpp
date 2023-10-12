/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:40:44 by pealexan          #+#    #+#             */
/*   Updated: 2023/10/12 15:03:20 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &copy) : AMateria(copy._type)
{
}

Ice &Ice::operator=(Ice const &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

Ice::~Ice(void)
{
}

AMateria *Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
