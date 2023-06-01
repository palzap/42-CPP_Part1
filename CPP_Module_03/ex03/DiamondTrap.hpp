/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:59:40 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 08:36:55 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	using FragTrap::FragTrap;
	using ScavTrap::ScavTrap;
	using ClapTrap::operator=;
	~DiamondTrap();
	void whoAmI(void);
	using FragTrap::_attack;
	using FragTrap::_HP;
	using ScavTrap::_EP;
	using ScavTrap::attack;
	int getHP(void);
	int getAttack(void);
	int getEP(void);

private:
	std::string _name;
};

#endif