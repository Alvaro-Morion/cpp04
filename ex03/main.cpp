/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:27:46 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/19 12:57:24 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	ft_leaks(void)
{
	system("leaks a.out");
}
int main()
{
	atexit(ft_leaks);
	{
		std::cout << "\tMATERA TESTS\t" << std::endl;
		Ice I0;
		Cure C0;
		AMateria *I = I0.clone();
		Character c("Bob");
		
		I0.use(c);
		C0.use(c);
		I->use(c);

		AMateria *m = I0.clone();
		m->use(c);
		delete m;
	}
	{
		std::cout << "CHARACTER TESTS\t" << std::endl;
		Character c("gurb");
		Character c1("Bob");
		AMateria *I = new Ice;
		AMateria *C = new Cure;
		c.use(0, c);
		c.equip(I);
		for(int i=0; i < 5; i++)
		{
			if(i%2)
				c.equip(C);
			else
				c.equip(I);
			c.use(i, c);
		}
		/*
		c.use(1, c);
		c.unequip(1);
		c.use(1,c1);
		c.equip(I); // It is equiped at the end
		c.use(3, c1);
		c1.equip(C);
		c1.use(0,c);
		c.equip(I);*/
	}
	return(0);
}
