/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:51:01 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 14:08:54 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "It's a Dog!" << std::endl;
	Animal::type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog fled!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof" << std::endl;
}