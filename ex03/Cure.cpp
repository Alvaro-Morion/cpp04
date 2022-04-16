/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:21:08 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/16 13:14:23 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructor and destructor */

Cure::Cure() : type("Cure")
{
	std::cout << "Cure: default constructor\n"; 
}

Cure::Cure(Cure const &src)
{
	*this = src;
	std::cout << "Cure: copy constructor\n";
}

Cure::~Cure()
{
	std::cout << "Cure: destructor\n";"
	return;
}

/* Operators */

Cure const	&Cure::operator=(Cure const &rhs)
{
	this->type = rhs.type;
	return(*this);
}

/* Functions */

Cure	const *Cure::clone()
{
	Cure *clone = new Cure(); 
}

void	use(ICharacter& target)
{
	std::cout << " heals " << target.getName() << "'s wounds\n";
}
