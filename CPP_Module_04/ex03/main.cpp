/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:38:55 by pealexan          #+#    #+#             */
/*   Updated: 2023/10/12 15:40:49 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		std::cout << "=================Subject test=================" << std::endl;
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "=================My tests=================" << std::endl;
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *cloud = new Character("Cloud");

		AMateria *tmp;
		tmp = src->createMateria("fire");
		cloud->equip(tmp);
		tmp = src->createMateria("ice");
		cloud->equip(tmp);
		tmp = src->createMateria("cure");
		cloud->equip(tmp);

		cloud->unequip(4);
		cloud->unequip(3);

		tmp = src->createMateria("ice");
		cloud->equip(tmp);
		tmp = src->createMateria("cure");
		cloud->equip(tmp);

		cloud->unequip(3);
		cloud->unequip(3);
		cloud->unequip(2);
		cloud->unequip(0);
		cloud->unequip(1);

		ICharacter *sephiroth = new Character("Sephiroth");
		cloud->use(0, *sephiroth);
		cloud->use(1, *cloud);

		delete sephiroth;
		delete cloud;
		delete src;
	}

	return 0;
}