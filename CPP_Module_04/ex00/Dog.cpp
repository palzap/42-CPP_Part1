/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:51:01 by pealexan          #+#    #+#             */
/*   Updated: 2023/09/05 15:39:11 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "It's a Dog!" << std::endl;
	Animal::type = "Dog";
}

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "It's a Dog!" << std::endl;
	Animal::type = "Dog";
}

Dog::Dog(Dog &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Overload operator = called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog fled!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof" << std::endl;
}