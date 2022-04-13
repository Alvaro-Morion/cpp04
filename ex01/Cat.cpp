/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:04:04 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 19:45:42 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor\n";
	this->_Brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor\n";
	this->_Brain = new Brain(*(src._Brain));
	this->type = src.type;
}

Cat::~Cat()
{
	delete(this->_Brain);
	std::cout << "Cat destructor\n";
	return;
}

Cat const &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	*(this->_Brain) = *(rhs._Brain);
	return(*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow\n";
}
