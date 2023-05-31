/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:07:35 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/31 14:57:17 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap("Default"), FragTrap("Default"), _name("Default")
{
	std::string suffix = "_clap_name";
	
	std::cout << "ClapTrap " << _name << " evolved to DiamondTrap!" << std::endl;
	ClapTrap::_name = "Default" + suffix;
	_HP = FragTrap::HP;
	_EP = ScavTrap::EP;
	_attack = FragTrap::AP;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name)
{
	std::string suffix = "_clap_name";

	std::cout << "ClapTrap " << _name << " evolved to DiamondTrap!" << std::endl;
	ClapTrap::_name = name + suffix;
	_HP = FragTrap::HP;
	_EP = ScavTrap::EP;
	_attack = FragTrap::AP;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " devolved to ClapTrap!" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

int	DiamondTrap::getHP(void)
{
	return (this->_HP);
}
int	DiamondTrap::getAttack(void)
{
	return (ScavTrap::_attack);
}

int	DiamondTrap::getEP(void)
{
	return (this->_EP);
}