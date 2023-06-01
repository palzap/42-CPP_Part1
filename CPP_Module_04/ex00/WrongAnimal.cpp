/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:09:46 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 14:06:55 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "A new WrongAnimal appears!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "A new WrongAnimal "<< name << " appears!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy) : type(copy.type)
{
	std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "Overload operator = called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal fled!" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal goes brrrrr" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}