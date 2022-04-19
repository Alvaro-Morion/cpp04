/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:17:39 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/19 10:19:35 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
class	Animal{
	public:
		Animal();
		Animal(Animal const &src);

		virtual ~Animal();

		Animal const &operator=(Animal const &rhs);
		
		std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string type;
};
#endif
