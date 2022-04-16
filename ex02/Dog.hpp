/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:28:56 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/16 12:17:09 by amorion-         ###   ########.fr       */
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

		std::string	GetIdea(int n) const;
		void		SetIdea(int n, std::string idea) const;

		void	makeSound(void);
	private:
		Brain* _Brain;
};
#endif
