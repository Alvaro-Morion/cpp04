/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:28:52 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/26 12:15:01 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Consructor Destructor*/

MateriaSource::MateriaSource()
{
	for (int i=0; i < 4; i++)
		memory[i] = NULL;
	//std::cout << "MateriaSource: Default constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i=0; i < 4; i++)
	{
		if (src.memory[i])
			memory[i] = src.memory[i]->clone();
		else
			memory[i] = NULL;
	}
	//std::cout << "MateriaSource: Copy constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i=0; i < 4; i++)
	{
		if(memory[i])
		{
			std::cout << memory[i]->getType() << " Freed\n";
			delete memory[i];
		}
	}
	return;
}

/* Operators */

MateriaSource const	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for(int i=0; i < 4; i++)
	{
		if(this->memory[i])
			delete this->memory[i];
		if(rhs.memory[i])
			this->memory[i] = rhs.memory[i]->clone();
		else
			this->memory[i] = NULL;
	}
	return(*this);
}

/* Member functions */

void	MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while(i < 4 && memory[i])
		i++;
	if(i < 4)
		this->memory[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for(int i=0; i < 4; i++)
		if(!type.compare(memory[i]->getType()))
			return(memory[i]->clone());
	return(NULL);
}
