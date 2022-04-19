/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:46:11 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/19 10:21:04 by amorion-         ###   ########.fr       */
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
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		Animal *array[4];

		for(int k = 0; k < 4; k++)
		{
			if(k%2)
				array[k] = new Dog();
			else
				array[k] = new Cat();
			array[k]->makeSound();
		}

		array[0]->setIdea(0, "I am a cat");
		*(array[2]) = *(array[0]);
		array[0]->setIdea(0, "I don't like water");
		std::cout << "Cat 0: " << array[0]->getIdea(0) << std::endl;
		std::cout << "Cat 2: " << array[2]->getIdea(0) << std::endl;

		for(int k = 0; k < 4; k++)
			delete array[k];
		delete i;
		delete j;
		Animal fish /*This is an error, an abstract class cannot be instanciated*/;
	}	
	return(0);
}
