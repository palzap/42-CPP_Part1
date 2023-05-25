/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:20:32 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/25 12:49:41 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
	}

	Harl		harl;
	std::string input = av[1];
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			lvlcase;

	for (int i = 0; i < 4; i++)
		if (levels[i] == input)
			lvlcase = i;

	switch(lvlcase)
	{
		default:
			std::cout << "[ I NEED TO COMPLAIN!!!! ]" << std::endl;
			break;
		
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
		
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
		
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
		
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
	}
	return (0);
}