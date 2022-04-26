/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:27:46 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/26 14:14:13 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
void	ft_leaks(void)
{
	system("leaks a.out");
}

int main()
{
	atexit(ft_leaks);
	std::cout << "\tSubject test\t" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "\tDeep copes and other things\t" << std::endl;
	
	MateriaSource *src_Source = new MateriaSource();

	src_Source->learnMateria(new Ice());
	MateriaSource *dest_Source = new MateriaSource(*src_Source);
	
	src_Source->learnMateria(new Cure());
	if(!dest_Source->createMateria("cure"))
	   std::cout << "NULL as it should be" << std::endl;
	delete src_Source;
	delete dest_Source;
	Character skier("skier");
	AMateria *I = new Ice();
	AMateria *C = new Cure();
	skier.equip(I);

	skier.use(0, skier); // should use Ice;
	skier.use(1, skier); // there is no 1;
	std::cout << "Only one message before this point\n";
	skier.equip(C);
	skier.unequip(0);
	skier.use(1, skier);
	
	Character paramedic(skier);
	paramedic.use(0, skier);
	skier.equip(dest_Source->createMateria("cure"));
	paramedic.use(1, skier);
	std::cout << "Only one cure message\n";
	delete I;
	return 0;
}
