/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:06 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/22 09:11:31 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.hpp"

bool	is_number(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;	
}

void	search_index(PhoneBook phonebook)
{
	std::string	input;
	int	i;
	
	while (1)
	{
		std::cout << "* Input the index to see full details *" << std::endl;
		getline(std::cin, input);
		if (input.length() == 0)
			continue ;
		if (is_number(input))
		{
			i = std::stoi(input);
			if (i < 0 || i >= phonebook.get_size())
				continue ;
			else
			{
				phonebook.contacts[i].print_info();
				break ;
			}
		}
		else
			continue ;
	}
}

int	main(void)
{
	std::string	input;
	PhoneBook	phonebook;
	int			i = 0;
	
	std::cout << "***************************************" << std::endl;
	std::cout << "*           Input a command           *" << std::endl;
	std::cout << "* ADD - save a new contact            *" << std::endl;
	std::cout << "* SEARCH - display a specific contact *" << std::endl;
	std::cout << "* EXIT - exits the program            *" << std::endl;
	std::cout << "***************************************" << std::endl;
	while (1)
	{
		getline(std::cin, input);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
		{
			phonebook.search();
			search_index(phonebook);
		}
		else if (input == "EXIT")
			break ;
		else
			continue ;
	}
	return 0;
}
