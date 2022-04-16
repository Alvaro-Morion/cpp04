/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:04:04 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/16 13:18:03 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* constructor destructor */
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

/* operators */
Cat const &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	this->_Brain = new Brain(*(rhs._Brain));
	return(*this);
}

/* Getters and setters */
	
std::string	Cat::GetIdea(int n) const
{
	if (n >= 100)
		return("I don't have such a large braain");
	return(this->_Brain->ideas[n]);
}

void	Cat::SetIdea(int n, std::string idea) const
{
	if(n >= 100)
		return;
	this->_Brain->ideas[n] = idea;
}
 /* Functions */
void	Cat::makeSound(void)
{
	std::cout << "meow\n";
}
