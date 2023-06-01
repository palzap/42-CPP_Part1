/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:51:07 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 12:07:23 by pealexan         ###   ########.fr       */
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
	ScavTrap(ScavTrap &copy);
	ScavTrap &operator=(ScavTrap const &copy);
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();

protected:
	static int const HP = 100;
	static int const EP = 50;
	static int const AP = 20;
};

#endif