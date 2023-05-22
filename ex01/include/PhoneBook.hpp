/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:24:51 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/22 09:10:44 by pealexan         ###   ########.fr       */
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
		PhoneBook();
		void	print();
		size_t	get_size(void);
		Contact	contacts[8];

	private:
		int		_size;
		int		_index;
};

#endif