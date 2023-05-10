/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:25:25 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/10 15:37:51 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bits/stdc++.h>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i) 
		{
			for (size_t x = 0; x < strlen(argv[i]); x++)
				putchar(toupper(argv[i][x]));
		}
		std::cout << std::endl;		
	}
	return 0;
}