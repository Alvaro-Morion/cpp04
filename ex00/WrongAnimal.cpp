/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:10:49 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 18:12:14 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal copy constructor\n";
	*this =src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor\n";
	return;
}

WrongAnimal const &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.type;
	return(*this);
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound\n";
}
