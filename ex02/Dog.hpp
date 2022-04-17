/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:48:53 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/17 12:39:06 by amorion-         ###   ########.fr       */
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
		
		Dog const	&operator=(Dog const &rhs);
		void		operator=(Animal const &rhs);
		
		std::string	getIdea(int n) const;
		void		setIdea(int n, std::string const idea);

		void	makeSound(void) const;
	private:
		Brain *brain;
};
#endif
