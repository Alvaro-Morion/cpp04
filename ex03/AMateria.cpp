/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 11:54:23 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/19 12:57:26 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructores y destructor */

AMateria::AMateria(): type("")
{
	std::cout << "AMateria: Default constructor\n";
}

AMateria::AMateria(std::string const &type): type(type)
{
	std::cout << "AMateria: Parametric constructor\n";
}

AMateria::AMateria(AMateria const &src)
{
	this->type = src.type;
	std::cout << "AMateria: Copy constructor\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria: Destructor\n";
	return;
}

/* Operators */

AMateria const	&AMateria::operator=(AMateria const &rhs)
{
	return(rhs);
}

/* Funciones Miembro */

void	AMateria::use(ICharacter& target)
{
	(void)target;
	return;
}
