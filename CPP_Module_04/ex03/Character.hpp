/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:22:14 by pealexan          #+#    #+#             */
/*   Updated: 2023/10/12 15:35:57 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#define MATERIA_SLOTS 4
#define BAG_SIZE 3

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_inventory[MATERIA_SLOTS];
	AMateria *_bag[BAG_SIZE];
	int _materiaSlots;

public:
	Character(void);
	Character(std::string name);
	Character(Character const &copy);
	Character &operator=(Character const &copy);
	~Character(void);

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	std::string const &getName() const;
};

#endif
