/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:28:22 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 14:08:45 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "It's a Cat!" << std::endl;
	Animal::type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat fled!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}