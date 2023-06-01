/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:06:13 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 14:18:33 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(WrongAnimal &copy);
	WrongAnimal &operator=(WrongAnimal const &copy);
	~WrongAnimal();
	void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};

#endif