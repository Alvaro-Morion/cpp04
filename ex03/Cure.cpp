/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:21:08 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/26 12:47:49 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructor and destructor */

Cure::Cure()
{
	this->type = "cure";
	//std::cout << "Cure: default constructor\n"; 
}

Cure::Cure(Cure const &src)
{
	*this = src;
	//std::cout << "Cure: copy constructor\n";
}

Cure::~Cure()
{
	//std::cout << "Cure: destructor\n";
	return;
}

/* Operators */

void	Cure::operator=(Cure const &rhs)
{
	this->type = rhs.type;
}

/* Functions */

AMateria	*Cure::clone() const
{
	Cure *clone = new Cure();
   	return(clone);	
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
