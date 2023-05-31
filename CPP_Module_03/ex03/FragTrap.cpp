/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:47:06 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/31 14:52:51 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
	std::cout << "ClapTrap " << _name << " evolved to FragTrap!" << std::endl;
	_HP = HP;
	_EP = EP;
	_attack = AP;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ClapTrap " << name << " evolved to FragTrap!" << std::endl;
	_HP = HP;
	_EP = EP;
	_attack = AP;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " devolved to ClapTrap!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives all around!" << std::endl;
}