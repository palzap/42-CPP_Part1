/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:51:07 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/31 14:53:32 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	using ClapTrap::ClapTrap;
	using ClapTrap::operator=;
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();

protected:
	static int const HP = 100;
	static int const EP = 50;
	static int const AP = 20;
};

#endif