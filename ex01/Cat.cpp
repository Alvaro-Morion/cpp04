/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:04:04 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/17 12:37:53 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor and destructor */

Cat::Cat()
{
	std::cout << "Cat default constructor\n";
	this->type = "Cat";
	this->brain = new Brain(); 
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor\n";
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor\n";
	delete brain;
	return;
}

/* Operators */

Cat const	&Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat =\n";
	this->type = rhs.getType();
	*(this->brain) = *(rhs.brain);
	return(*this);
}
void	Cat::operator=(Animal const &rhs)
{
	std::cout << "Cat = Animal\n";
   	Cat const *rhsnew = dynamic_cast<Cat const *>(&rhs);
	
	if(rhs.getType() == this->getType())
	{
		this->type = rhsnew->getType();
		for(int i = 0; i < 100; i++)
			this->setIdea(i, rhsnew->getIdea(i));
	}
	else
		std::cout << "Unable to assign" << rhs.getType() << "to Cat\n";
}
/* Getters and setters */

std::string	Cat::getIdea(int n) const
{
	return(brain->getIdea(n));
}

void	Cat::setIdea(int n, std::string const idea)
{
	brain->setIdea(n, idea);
}
void	Cat::makeSound(void) const
{
	std::cout << "meow\n";
}
