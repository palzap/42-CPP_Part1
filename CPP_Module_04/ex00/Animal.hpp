/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:06:13 by pealexan          #+#    #+#             */
/*   Updated: 2023/06/01 14:07:57 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string name);
	Animal(Animal &copy);
	Animal &operator=(Animal const &copy);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};

#endif