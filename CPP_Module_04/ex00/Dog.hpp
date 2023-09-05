/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:50:58 by pealexan          #+#    #+#             */
/*   Updated: 2023/09/05 16:04:02 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal 
{
	public:
		Dog();
		Dog(std::string name);
		Dog(Dog &copy);
		Dog &operator=(Dog const &copy);
		~Dog();
		void makeSound() const;
};

#endif