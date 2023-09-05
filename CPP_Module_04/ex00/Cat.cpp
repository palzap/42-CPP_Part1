/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:28:22 by pealexan          #+#    #+#             */
/*   Updated: 2023/09/05 15:37:43 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "It's a Cat!" << std::endl;
	Animal::type = "Cat";
}

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "It's a Cat!" << std::endl;
	Animal::type = "Cat";
}

Cat::Cat(Cat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Overload operator = called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat fled!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}