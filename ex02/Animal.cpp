/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:11:35 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/17 13:09:45 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructor destructor */

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

/* Opertors */

void	Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal =\n";
	this->type = rhs.type;
}

/* Getters and setters */

std::string Animal::getType(void) const
{
	return(this->type);
}

std::string	Animal::getIdea(int n) const
{
	(void)n;
	return("This animal doesn't hava a brain");
}

void	Animal::setIdea(int n, std::string const idea)
{
	(void)n;
	(void)idea;
	std::cout << "This animal doesn't have a brain\n";
}
