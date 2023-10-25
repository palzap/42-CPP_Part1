/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:05:34 by pealexan          #+#    #+#             */
/*   Updated: 2023/10/25 09:36:07 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void copy_constructors(void)
{
	Cat *cat = new Cat();
	Cat *clone = new Cat(*cat);

	cat->printAddress();
	delete cat;

	clone->printAddress();
	delete clone;

	std::cout << std::endl;
}

int main(void)
{
	Animal *animal[10];

	for (int i = 0; i < 5; i++)
		animal[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animal[i] = new Cat();
	copy_constructors();
	
	for (int i = 0; i < 10; i++)
		delete animal[i];

	return (0);
}