/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:21:08 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/19 12:36:13 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructor and destructor */

Ice::Ice() 
{
	this->type = "ice";
	std::cout << "Ice: default constructor\n"; 
}

Ice::Ice(Ice const &src)
{
	*this = src;
	std::cout << "Ice: copy constructor\n";
}

Ice::~Ice()
{
	std::cout << "Ice: destructor\n";
	return;
}

/* Operators */

Ice const	&Ice::operator=(Ice const &rhs)
{
	this->type = rhs.type;
	return(*this);
}

/* Functions */

AMateria	*Ice::clone() const
{
	Ice *clone = new Ice(); 
	return(clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* Shots an ice ball to " << target.getName() << " *\n";
}
