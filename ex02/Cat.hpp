/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:48:53 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/17 12:36:30 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal{
	public:
		Cat();
		Cat(Cat const &src);

		~Cat();
		
		Cat const	&operator=(Cat const &rhs);
		void		operator=(Animal const &rhs);
		
		std::string	getIdea(int n) const;
		void		setIdea(int n, std::string const idea);

		void	makeSound(void) const;
	private:
		Brain *brain;
};
#endif
