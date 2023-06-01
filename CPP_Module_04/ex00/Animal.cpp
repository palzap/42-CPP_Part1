/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:09:46 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 10:05:31 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "A new Animal appears!" << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "A new Animal "<< name << " appears!" << std::endl;
}

Animal::Animal(Animal &copy) : type(copy.type)
{
	std::cout << "Copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Overload operator = called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}

void Animal::makesound()
{
	std::cout << "Animal goes brrrrr" << std::endl;
}

std::string	getType(void)
{
	return ();
}