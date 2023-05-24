/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:30:50 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/24 11:37:24 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* brainPTR = &brain;
	std::string& brainREF = brain;

	std::cout << &brain << std::endl;
	std::cout << brainPTR << std::endl;
	std::cout << &brainREF << std::endl;

	std::cout << brain << std::endl;
	std::cout << *brainPTR << std::endl;
	std::cout << brainREF << std::endl;

	return (0);
}