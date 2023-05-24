/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:13:00 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/24 15:07:48 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

int	main(int ac, char **av)
{	
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	
	std::string	newfile = av[1];
	std::string	line;
	std::string findStr = av[2];
	std::string replaceStr = av[3];
	size_t		pos;
	newfile.append(".replace");
	
	std::ifstream	file(av[1]);
	std::ofstream 	replacefile(newfile.c_str());	
	if (file.is_open() && replacefile.is_open())
	{
		while (std::getline(file, line))
		{
			pos = line.find(findStr);
			std::string	sub1 = line.substr(0, pos);
			std::string	sub2 = line.substr(pos + findStr.length());
			line = sub1 + replaceStr + sub2;
			replacefile << line << std::endl;
		}
		file.close();
		replacefile.close();
	}
	else
		std::cout << "Failed to open file" << std::endl;
	return (0);
}