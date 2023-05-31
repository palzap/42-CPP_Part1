/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:44:22 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/31 14:53:27 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	using ClapTrap::ClapTrap;
	using ClapTrap::operator=;
	~FragTrap();
	void highFivesGuys(void);

protected:
	static int const HP = 100;
	static int const EP = 100;
	static int const AP = 30;
};

#endif