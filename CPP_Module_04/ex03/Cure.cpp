/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:24:00 by pealexan          #+#    #+#             */
/*   Updated: 2023/10/12 15:03:15 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &copy) : AMateria(copy._type)
{
}

Cure &Cure::operator=(Cure const &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

Cure::~Cure(void)
{
}

AMateria *Cure::clone(void) const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}