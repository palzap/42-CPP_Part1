/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:10:08 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/25 12:27:32 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I gotta help you fix your mess again! This is your debug message!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Thanks for asking me instead of ChatGPT! This is your info message!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Don't do that again please! This is your warning message!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "You messed up again! This is your error message!" << std::endl;
}	

void	Harl::complain(std::string level)
{
	void (Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*funcs[i])();
}
