/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:10:00 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/22 09:17:54 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_HPP
# define BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"
# include "PhoneBook.hpp"

void	search_index(PhoneBook phonebook);
bool	is_number(std::string str);

#endif
