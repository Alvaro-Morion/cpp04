/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 13:00:47 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/16 13:41:00 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructor destructor*/

Character::Character() : name("Unnamed")
{
	for (int i=0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character: Default constructor\n";
}

Character::Character(std::string const name) : name(name)
{
	for (int i=0; i<4; i++)
		inverntory[i] = NULL;
	std::cout << "Character: Parametric constructor\n";"
}

Character::Character(Character const &src)
{
	this->name = src.name;
	for (int i=0; i<4; i++)
	{
		if(rhs.inventory[i])
            this->inventory[i] = new AMateria(*(rhs.inventory[i]));
        else
            this->inventory[i] = NULL;
	}
	std::cout << "Character: Copy constructor\n";
}

Character::~Character()
{
	std::cout << "Character: destructor\n";
	return;
}

/* Operators */

Character const	&Character::operator=(Character const &rhs)
{
	this->name = rhs.name;
	for (int i=0; i<4; i++)
	{
		if(rhs.inventory[i])
			this->inventory[i] = new AMateria(*(rhs.inventory[i]));
		else
			this->inventory[i] = NULL;
	}
	return(*this);
}

/* Functions */

std::string const	&Character::getName()
{
	return(this->name);
}

void				equip(AMateria* m)
{
	int i = 0;

	while(i < 4 & this->inventory[i])
		i++;
	if(i < 4)
		this->inventory[i] = m;
}

void				unequip(int idx)
{
	this->invenntory[idx]=NULL;
}

void				use(int idx, ICharacter &target)
{
	this->inventory[idx]->use(target);
}
