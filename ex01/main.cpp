/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:46:11 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/17 13:11:05 by amorion-         ###   ########.fr       */
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
	/*{
	std::cout << "\tBRAIN TESTS\t" << std::endl;
	Brain	B1;

	B1.setIdea(0, "Good");
	
	Brain B2(B1);
	Brain B3;
	
	B3 = B1;

	B1.setIdea(0, "Bad");

	std::cout << "B1: " <<B1.getIdea(0) << std::endl;
	std::cout << "B2: " <<B2.getIdea(0) << std::endl;
	std::cout << "B3: " <<B3.getIdea(0) << std::endl;
	}*/
	/*{
		std::cout << "\tCAT TESTS (DOGS ARE THE SAME)\t" << std::endl;
		Cat C1;
		C1.setIdea(0, "I am a cat");
		Cat C2(C1);
		Cat C3;
		C3 = C1;
		Animal *C4 = new Cat();
		*C4 = C1;
		C1 = *C4;
		C1.setIdea(0, "I hate dogs");
		std::cout << "C1: " << C1.getIdea(0) << std::endl;
		std::cout << "C2: " << C2.getIdea(0) << std::endl;
		std::cout << "C3: " << C3.getIdea(0) << std::endl;
		std::cout << "C4: " << C4->getIdea(0) << std::endl;
		delete C4;
	}*/
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
	}	
	return(0);
}
