/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:32:52 by pealexan          #+#    #+#             */
/*   Updated: 2023/10/12 15:40:18 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Default")
{
	for (int i = 0; i < MATERIA_SLOTS; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < BAG_SIZE; i++)
		this->_bag[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < MATERIA_SLOTS; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < BAG_SIZE; i++)
		this->_bag[i] = NULL;
}

Character::Character(Character const &copy) : _name(copy._name)
{
	for (int i = 0; i < MATERIA_SLOTS; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = copy._inventory[i];
	}
	for (int i = 0; i < BAG_SIZE; i++)
	{
		if (this->_bag[i])
			delete this->_bag[i];
		this->_bag[i] = copy._bag[i];
	}
}

Character &Character::operator=(Character const &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_materiaSlots = copy._materiaSlots;
		for (int i = 0; i < MATERIA_SLOTS; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (this->_bag[i])
				delete this->_bag[i];
			this->_inventory[i] = copy._inventory[i];
			this->_bag[i] = copy._bag[i];
		}
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < MATERIA_SLOTS; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}

	for (int i = 0; i < BAG_SIZE; i++)
	{
		if (this->_bag[i])
			delete this->_bag[i];
	}
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < MATERIA_SLOTS; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " equipped " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << this->_name << " has no materia slots available!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= MATERIA_SLOTS)
	{
		std::cout << "Not a valid materia slot!" << std::endl;
		return;
	}

	if (!this->_inventory[idx])
	{
		std::cout << this->_name << " has no Materia in that slot!" << std::endl;
		return;
	}

	for (int i = 0; i < BAG_SIZE; i++)
	{
		if (!this->_bag[i])
		{
			this->_bag[i] = this->_inventory[idx];
			std::cout << this->_inventory[idx]->getType() << " was stored in the bag at slot " << i << std::endl;
			this->_inventory[idx] = NULL;
			return;
		}
	}
	std::cout << "Bag is full!" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Not a valid materia slot!" << std::endl;
		return;
	}
	if (this->_inventory[idx] == NULL)
	{
		std::cout << this->_name << " has no materia in that slot!" << std::endl;
		return;
	}
	this->_inventory[idx]->use(target);
}

std::string const &Character::getName() const
{
	return this->_name;
}