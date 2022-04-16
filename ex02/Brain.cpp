/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:33:23 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 19:34:46 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor\n";
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain Copy constructor\n";

    for (int i=0; i < 100; i++)
        this->ideas[i].assign(src.ideas[i]);
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
	return;
}

Brain const &Brain::operator=(Brain const &src)
{	
	for (int i=0; i < 100; i++)
		this->ideas[i].assign(src.ideas[i]);
	return(*this);
}
