/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:19:13 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/22 09:11:35 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/book.hpp"

void	Contact::print_info()
{
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phone_number << std::endl;
	std::cout << "Darkest Secret: " << _darkest_secret << std::endl;
}

std::string	Contact::read_input(std::string prompt)
{
	std::string	info;

	while (1)
	{
		std::cout << prompt << std::endl;
		if (!getline(std::cin, info))
			exit(0);
		if (info.length() == 0)
			continue ;
		else
			break ; 
	}
	return info;
}

std::string	resize_info(std::string info)
{
	if (info.length() > 10)
	{
		info.resize(9);
		info.append(".");
	}
	return info;
}

void	Contact::get_info(void)
{
	this->_first_name = this->read_input("First Name");
	this->_last_name = this->read_input("Last Name");
	this->_nickname = this->read_input("Nickname");
	this->_phone_number = this->read_input("Phone Number");
	this->_darkest_secret = this->read_input("Darkest Secret");
}

std::string	Contact::get_first_name(void)
{
	if (this->_first_name.length() > 10)
		return resize_info(this->_first_name);
	return this->_first_name;
}

std::string	Contact::get_last_name(void)
{
	if (this->_last_name.length() > 10)
		return resize_info(this->_last_name);
	return this->_last_name;
}

std::string	Contact::get_nickname(void)
{
	if (this->_nickname.length() > 10)
		return resize_info(this->_nickname);
	return this->_nickname;
}

std::string	Contact::get_phone_number(void)
{
	if (this->_phone_number.length() > 10)
		return resize_info(this->_phone_number);
	return this->_phone_number;
}

std::string	Contact::get_darkest_secret(void)
{
	if (this->_darkest_secret.length() > 10)
		return resize_info(this->_darkest_secret);
	return this->_darkest_secret;
}
