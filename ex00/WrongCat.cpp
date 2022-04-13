/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:06:21 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 18:08:14 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat copy constructor\n";
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor\n";
	return;
}

WrongCat const &WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.type;
	return(*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "meow\n";
}
