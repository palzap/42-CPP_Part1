/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 08:33:17 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 12:31:41 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <limits>
#include <unistd.h>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie();
		void	giveName(std::string name);
		void	announce(void) const;
};

Zombie*	zombieHorde(int n, std::string name);

#endif