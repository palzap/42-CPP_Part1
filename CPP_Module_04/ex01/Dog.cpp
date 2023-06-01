/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:51:01 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 15:01:05 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "It's a Dog!" << std::endl;
	Animal::type = "Dog";
	Brain *_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog fled!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof" << std::endl;
}