/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:09:46 by pealexan          #+#    #+#             */
/*   Updated: 2023/09/13 15:34:58 by pealexan         ###   ########.fr       */
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
	std::cout << "A Copy constructor called" << std::endl;
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
	std::cout << "Animal fled!" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "** the sound of silence **" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}