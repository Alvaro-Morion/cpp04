/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:11:35 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 17:44:53 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor\n";
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy constructor\n";
	*this =src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor\n";
	return;
}

Animal const &Animal::operator=(Animal const &rhs)
{
	this->type = rhs.type;
	return(*this);
}

std::string Animal::getType(void) const
{
	return(this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal Sound\n";
}
