/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:24:51 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/22 09:11:29 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/book.hpp"

PhoneBook::PhoneBook(void)
{
	this->_size = 0;
	this->_index = 0;
}

void	PhoneBook::add(void)
{
	this->contacts[_index].get_info();
	this->_index++;
	if (_index >= 8)
		_index = 0;
	if (_size < 8)
		this->_size++;
}

void	PhoneBook::search(void)
{
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < this->_size; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_nickname() << std::endl;
	}
}

size_t	PhoneBook::get_size(void)
{
	return this->_size;
}