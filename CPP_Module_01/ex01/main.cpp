/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 08:45:52 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 12:43:45 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int			hordeSize;
	std::string zombieName;
	Zombie		*zombie;

	std::cout << "What's the size of the Zombie Horde?" << std::endl;
	std::cin >> hordeSize;
	if (std::cin.fail())
	{
		std::cout << "Invalid input, only int type accepted" << std::endl;
        _exit(1);
	}
	else
	{
		std::cout << "Give a name to your Zombies" << std::endl;
		std::cin >> zombieName;
	}
	
	zombie = zombieHorde(hordeSize, zombieName);
	for (int i = 0; i < hordeSize; i++)
	{
		zombie[i].announce();
	}
	delete [] zombie;
	return (0);
}