/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:31:58 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 19:38:27 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor\n";
	this->_Brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor\n";
	this->_Brain = new Brain(*(src._Brain));
	this->type = src.type;
}

Dog::~Dog()
{
	delete(this->_Brain);
	std::cout << "Dog destructor\n";
	return;
}

Dog const &Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	*(this->_Brain) = *(rhs._Brain);
	return(*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Barks\n";
}
