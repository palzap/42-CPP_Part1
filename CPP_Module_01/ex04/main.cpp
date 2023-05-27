/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:13:00 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/27 18:22:48 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

void error_handling(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		exit(1);
	}

	std::string findStr = av[2];
	if (findStr.empty())
	{
		std::cout << "Find string can't be empty" << std::endl;
		exit(1);
	}
}

std::string do_replace(std::string findStr, std::string replaceStr, std::string line)
{
	size_t pos = 0;

	while (1)
	{
		pos = line.find(findStr, pos);
		if (pos == std::string::npos)
			break;
		line.erase(pos, findStr.length());
		line.insert(pos, replaceStr);
		pos += replaceStr.length();
	}
	return line;
}

int main(int ac, char **av)
{
	error_handling(ac, av);
	std::string newfile = av[1];
	std::string findStr = av[2];
	std::string replaceStr = av[3];
	std::string line;

	newfile.append(".replace");
	std::ifstream file(av[1]);
	std::ofstream replacefile(newfile.c_str());
	if (file.is_open() && replacefile.is_open())
	{
		if (findStr == replaceStr)
			replacefile << file.rdbuf();
		while (std::getline(file, line))
		{
			line = do_replace(findStr, replaceStr, line);
			replacefile << line << std::endl;
		}
		file.close();
		replacefile.close();
	}
	else
		std::cout << "Failed to open file" << std::endl;
	return (0);
}