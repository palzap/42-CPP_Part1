/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:30:26 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 11:54:00 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _HP(HP), _EP(EP), _attack(AP)
{
	std::cout << "ClapTrap Default spawned!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(HP), _EP(EP), _attack(AP)
{
	std::cout << "ClapTrap " << name << " spawned!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy) : _name(copy._name), _HP(copy._HP), _EP(copy._EP), _attack(copy._attack)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_attack = copy._attack;
		this->_HP = copy._HP;
		this->_EP = copy._EP;
		this->_name = copy._name;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " out!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_EP == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to attack" << std::endl;
		return;
	}
	else if (this->_HP == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		return;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << " causing " << this->_attack << " points of damage" << std::endl;
	}
	this->_EP -= 1;
	if (this->_EP == 0)
		this->_EP = 0;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << "Poor " << this->_name << " is already dead!" << std::endl;
		return;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " takes ";
		std::cout << amount << " points of damage" << std::endl;
	}
	if (amount >= this->_HP)
		this->_HP = 0;
	else
		this->_HP -= amount;
	if (this->_HP == 0)
		std::cout << "ClapTrap " << this->_name << " R.I.P.!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EP == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to repair" << std::endl;
		return;
	}
	else if (this->_HP == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		return;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " repairs ";
		std::cout << amount << " HP" << std::endl;
	}
	this->_EP -= 1;
	if (this->_EP == 0)
		this->_EP = 0;
	this->_HP += amount;
}