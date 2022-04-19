/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 13:00:47 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/19 12:57:28 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructor destructor*/

Character::Character() 
{
	this->name = "Unnamed";
	for (int i=0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character: Default constructor\n";
}

Character::Character(std::string const name)
{
	this->name = name;
	for (int i=0; i<4; i++)
		inventory[i] = NULL;
	std::cout << "Character: Parametric constructor\n";
}

Character::Character(Character const &src)
{
	this->name = src.name;
	for (int i=0; i<4; i++)
	{
		if(src.inventory[i])	 
			 this->inventory[i] = src.inventory[i]->clone();
        else
			this->inventory[i] = NULL;
	}
	std::cout << "Character: Copy constructor\n";
}

Character::~Character()
{
	std::cout << "Character: destructor\n";
	for(int i=0; i < 4; i++)
	{
		std::cout << i << std::endl;
		if(inventory[i])
			delete inventory[i];
	}
	return;
}

/* Operators */

Character const	&Character::operator=(Character const &rhs)
{
	this->name = rhs.name;
	for (int i=0; i<4; i++)
	{
		if(this->inventory[i])
			delete this->inventory[i];
		if(rhs.inventory[i])
			this->inventory[i] = rhs.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return(*this);
}

/* Getters and Setters */

std::string const	&Character::getName() const
{
	return(this->name);
}

/* Functions */
void	Character::equip(AMateria* m)
{
	int i = 0;
	while(i < 4 && this->inventory[i])
		i++;
	if(i < 4)
		this->inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if(idx < 0 || idx > 3)
		return;
	for(int i=idx; i < 3; i++)
		this->inventory[i] = this->inventory[i + 1];
	this->inventory[3] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if(idx < 4 && idx >= 0 && this->inventory[idx])
		this->inventory[idx]->use(target);
}
