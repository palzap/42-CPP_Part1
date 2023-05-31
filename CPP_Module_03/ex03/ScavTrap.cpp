/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:59:43 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/31 14:51:03 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
	std::cout << "ClapTrap " << _name << " evolved to ScavTrap!" << std::endl;
	_HP = HP;
	_EP = EP;
	_attack = AP;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ClapTrap " << name << " evolved to ScavTrap!" << std::endl;
	_HP = HP;
	_EP = EP;
	_attack = AP;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " devolved to ClapTrap!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " Gate Keeper mode on!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_EP <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy to attack" << std::endl;
		return;
	}
	else if (this->_HP <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
		return;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << " causing " << this->_attack << " points of damage" << std::endl;
	}
	this->_EP -= 1;
	if (this->_EP <= 0)
		this->_EP = 0;
}