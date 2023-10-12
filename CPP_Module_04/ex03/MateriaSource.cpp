/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:13:00 by pealexan          #+#    #+#             */
/*   Updated: 2023/10/12 15:40:52 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < MAX; i++)
		this->materias[i] = copy.materias[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < MAX; i++)
		{
			if (this->materias[i])
				delete this->materias[i];
			this->materias[i] = copy.materias[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < MAX; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = materia;
			std::cout << materia->getType() << " materia learned!" << std::endl;
			return;
		}
	}
	std::cout << "Can't learn any more materias!" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MAX; i++)
	{
		if (this->materias[i] && (this->materias[i]->getType() == type))
		{
			std::cout << this->materias[i]->getType() << " materia created!" << std::endl;
			return (this->materias[i]->clone());
		}
	}
	std::cout << type << " materia not learned yet!" << std::endl;
	return (NULL);
}