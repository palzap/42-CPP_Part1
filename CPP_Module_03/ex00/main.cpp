/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:31:45 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/30 15:15:39 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string	clapName;
	std::string	target;
	std::string command;
	unsigned int amount;

	std::cout << "What's the name of yor ClapTrap?" << std::endl;
	std::cin >> clapName;
	std::cout << "What's the name of yor target?" << std::endl;
	std::cin >> target;
	
	ClapTrap clap(clapName);

	std::cout << "Input commands: ATTACK | REPAIR | DEFEND" << std::endl;
	while (1)
	{
		std::cin >> command;
		if (command == "ATTACK")
			clap.attack(target);
		else if(command == "REPAIR")
		{
			std::cout << "How much you want to repair?" << std::endl;
			std::cin >> amount;
			clap.beRepaired(amount);
		}
		else if(command == "DEFEND")
		{
			std::cout << "How much damage will it take?" << std::endl;
			std::cin >> amount;
			clap.takeDamage(amount);
		}
		else if (command == "EXIT")
			return (0);
		else
			continue;
	}
	return (0);
}