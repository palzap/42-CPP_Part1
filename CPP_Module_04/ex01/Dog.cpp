/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:51:01 by pealexan          #+#    #+#             */
/*   Updated: 2023/09/13 15:34:21 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "It's a Dog!" << std::endl;
	Animal::type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "It's a Dog!" << std::endl;
	Animal::type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog &copy) : Animal(copy), _brain(copy._brain)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Overload operator = called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		this->_brain = new Brain(*copy._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog fled!" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "woof woof" << std::endl;
}