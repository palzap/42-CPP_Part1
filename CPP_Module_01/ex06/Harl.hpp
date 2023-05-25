/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:58:54 by pealexan          #+#    #+#             */
/*   Updated: 2023/05/25 12:13:31 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
