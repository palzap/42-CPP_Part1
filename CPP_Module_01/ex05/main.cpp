/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:20:32 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/25 12:31:18 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "DEBUG" << std::endl;
	harl.complain("DEBUG");

	std::cout << "INFO" << std::endl;
	harl.complain("INFO");	

	std::cout << "WARNING" << std::endl;
	harl.complain("WARNING");

	std::cout << "ERROR" << std::endl;
	harl.complain("ERROR");
}