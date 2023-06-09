/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:02:33 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 08:36:25 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("Coiso");

	scav.attack("cenas");
	scav.guardGate();
	scav.beRepaired(50);
	scav.takeDamage(50);
	return (0);
}