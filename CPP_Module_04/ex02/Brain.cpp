/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:53:43 by pealexan          #+#    #+#             */
/*   Updated: 2023/09/13 15:30:09 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Idea";
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(Brain const &copy)
{
	std::cout << "Brain overload operator = called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destroyed!" << std::endl;
}