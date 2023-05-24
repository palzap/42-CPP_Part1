/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 08:45:52 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/24 11:21:10 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	rChumpName;
	std::string zombieName;
	Zombie	*zombie;

	std::cout << "Give a name to the random Chump" << std::endl;
	std::cin >> rChumpName;
	std::cout << "Give a name to your Zombie" << std::endl;
	std::cin >> zombieName;
	randomChump(rChumpName);
	zombie = newZombie(zombieName);
	zombie->announce();
	delete zombie;
	return (0);
}