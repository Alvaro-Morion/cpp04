/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:28:56 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 19:36:01 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal{
	public:
		Dog();
		Dog(Dog const &src);

		~Dog();

		Dog const &operator=(Dog const &rhs);

		void	makeSound(void) const;
	private:
		Brain* _Brain;
};
#endif
