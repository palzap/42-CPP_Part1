/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:02:33 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 08:45:13 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Coiso");

	diamond.attack("cenas");
	diamond.whoAmI();
	std::cout << "HP " << diamond.getHP() << std::endl;
	std::cout << "EP " << diamond.getEP() << std::endl;
	std::cout << "Attack " << diamond.getAttack() << std::endl;
	return (0);
}