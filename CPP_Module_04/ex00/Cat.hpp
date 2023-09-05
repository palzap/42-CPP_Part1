/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:25:56 by pealexan          #+#    #+#             */
/*   Updated: 2023/09/05 16:03:24 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal 
{
	public:
		Cat();
		Cat(std::string name);
		Cat(Cat &copy);
		Cat &operator=(Cat const &copy);
		~Cat();
		void makeSound() const;
};

#endif