/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 13:00:47 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/26 14:14:11 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructor destructor*/

Character::Character() 
{
	this->name = "Unnamed";
	for (int i=0; i < 4; i++)
		inventory[i] = NULL;
	//std::cout << "Character: Default constructor\n";
}

Character::Character(std::string const name)
{
	this->name = name;
	for (int i=0; i<4; i++)
		inventory[i] = NULL;
	//std::cout << "Character: Parametric constructor\n";
}

Character::Character(Character const &src)
{
	this->name = src.name;
	for (int i=0; i<4; i++)
	{
		this->inventory[i] = NULL;
		if(src.inventory[i])	 
			 this->inventory[i] = src.inventory[i]->clone();
	}
	//std::cout << "Character: Copy constructor\n";
}

Character::~Character()
{
	//std::cout << this->name <<"Character: destructor\n";
	for(int i=0; i < 4; i++)
	{
		if(inventory[i] != NULL)
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
		if(this->inventory[i] != NULL)
			delete this->inventory[i];
		inventory[i] = NULL;
		if(rhs.inventory[i])
			this->inventory[i] = rhs.inventory[i]->clone();
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
	{
		this->inventory[i] = this->inventory[i + 1];
	}
	this->inventory[3] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if(idx < 4 && idx >= 0 && inventory[idx])
		this->inventory[idx]->use(target);
}
