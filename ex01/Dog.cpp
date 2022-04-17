/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:04:04 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/17 12:51:52 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor and destructor */

Dog::Dog()
{
	std::cout << "Dog default constructor\n";
	this->type = "Dog";
	this->brain = new Brain(); 
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor\n";
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor\n";
	delete brain;
	return;
}

/* Operators */

Dog const	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog =\n";
	this->type = rhs.getType();
	*(this->brain) = *(rhs.brain);
	return(*this);
}
void	Dog::operator=(Animal const &rhs)
{
	std::cout << "Dog = Animal\n";
   	Dog const *rhsnew = dynamic_cast<Dog const *>(&rhs);
	
	if(rhs.getType() == this->getType())
	{
		this->type = rhsnew->getType();
		for(int i = 0; i < 100; i++)
			this->setIdea(i, rhsnew->getIdea(i));
	}
	else
		std::cout << "Unable to assign" << rhs.getType() << "to Dog\n";
}

/* Getters and setters */

std::string	Dog::getIdea(int n) const
{
	return(brain->getIdea(n));
}

void	Dog::setIdea(int n, std::string const idea)
{
	brain->setIdea(n, idea);
}
void	Dog::makeSound(void) const
{
	std::cout << "bark\n";
}
