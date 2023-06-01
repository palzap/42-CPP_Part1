/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:28:22 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 14:08:45 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CPP
# define WRONGCAT_CPP

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "It's a WrongCat!" << std::endl;
	WrongAnimal::type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat fled!" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}

#endif