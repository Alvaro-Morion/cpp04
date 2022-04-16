/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:31:58 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/16 11:29:45 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor Destructor */
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

/* Operators */

Dog const &Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	*(this->_Brain) = *(rhs._Brain);
	return(*this);
}

/* Getters and setters */

std::string Dog::GetIdea(int n) const
{
    if (n >= 100)
        return("I don't have such a large braain");
    return(this->_Brain->ideas[n]);
}

void    Dog::SetIdea(int n, std::string idea) const
{
    if(n >= 100)
        return;
    this->_Brain->ideas[n] = idea;
}

/* Functions */

void	Dog::makeSound(void)
{
	std::cout << "Barks\n";
}
