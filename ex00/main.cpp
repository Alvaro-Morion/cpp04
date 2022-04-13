/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:18:26 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 18:19:30 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	ft_leaks(void)
{
	system("leaks a.out");
}

int main()
{
	atexit(ft_leaks);
	{	
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
	
		i->makeSound();
		j->makeSound();
		meta->makeSound();
	
		delete meta;
		delete j;
		delete i;
	}
	
	{
		std::cout << "\t WRONG ANIMAL\t" << std::endl;
		const WrongAnimal *i = new WrongCat();

		i->makeSound();
		delete i;
	}

	return(0);
}
