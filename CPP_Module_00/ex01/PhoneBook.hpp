/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:24:51 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/23 14:19:34 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "book.hpp"

class PhoneBook
{
	public:
		void	add();
		void	search();
		size_t	get_size(void) const;
		Contact	contacts[8];
		PhoneBook();

	private:
		int		_size;
		int		_index;
};

#endif