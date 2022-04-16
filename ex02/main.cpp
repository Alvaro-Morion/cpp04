/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:46:11 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/16 13:40:54 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void	ft_leaks(void)
{
	system("leaks a.out");
}
int main()
{
	atexit(ft_leaks);
	{
	Brain	B1;

	B1.ideas[0] = "Good";
	
	Brain B2;
	B2 = B1;
	Brain B3(B1);

	B1.ideas[0] = "Bad";

	std::cout << "B1: " <<B1.ideas[0] << std::endl;
	std::cout << "B2: " <<B2.ideas[0] << std::endl;
	std::cout << "B3: " <<B3.ideas[0] << std::endl;
	}
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		Animal *array = new Animal[4];
		for(int k=0; k < 4; k++)
		{
			if(k%2)
				array[k] = Animal(*j);
			else
				array[k] = Animal(*i);
		}
		for (int k=0; k < 4; k++)
			std::cout << array[k].getType() << std::endl;
		i->Brain->ideas[0] = "I am a cat";
		Cat copy(i);
		i->Brain->ideas[0] = "I am a tiger";
		std::cout << copy->Brain->ideas[0] << std::endl;
		std::cout << i->Brain->ideas[0] << std::endl;
		delete[] array;
		delete i;
		delete j;
	}
	return(0);
}
