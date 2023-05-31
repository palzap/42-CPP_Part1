/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:02:33 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/31 11:52:31 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("Coiso");

	frag.attack("cenas");
	frag.beRepaired(50);
	frag.takeDamage(50);
	frag.highFivesGuys();
	return (0);
}