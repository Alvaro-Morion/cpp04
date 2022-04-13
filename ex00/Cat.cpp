/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:04:04 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 18:05:35 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor\n";
	this->type = "Cat";
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor\n";
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor\n";
	return;
}

Cat const &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	return(*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow\n";
}
