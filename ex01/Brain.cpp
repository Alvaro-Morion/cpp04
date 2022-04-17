/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:33:23 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/17 11:44:13 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructor destructor */
Brain::Brain()
{
	std::cout << "Brain Default constructor\n";
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain Copy constructor\n";

    for (int i=0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
	return;
}

/* Operators */

Brain const &Brain::operator=(Brain const &src)
{
	std::cout << "Brain =\n";	
	for (int i=0; i < 100; i++)
		ideas[i] = src.ideas[i];
	return(*this);
}

/* Getterrs and setters */

std::string const Brain::getIdea(int n)
{
	if(n < 100 && n >=0)
		return(this->ideas[n]);
	else
		return("Invalid idea number");
}

void	Brain::setIdea(int n, std::string const idea)
{
	if(n < 100 && n >= 0)
		this->ideas[n] = idea;
	else
		std::cout << "Invalid index the idea wasn't set" << std::endl;
}
