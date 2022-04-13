/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:31:58 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 17:43:43 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor\n";
	this->type = "Dog";
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor\n";
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor\n";
	return;
}

Dog const &Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	return(*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Barks\n";
}
