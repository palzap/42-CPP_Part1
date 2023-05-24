/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:18:51 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/24 11:13:09 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie*	zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		zombies[i].giveName(name);
	}
	return(zombies);
}