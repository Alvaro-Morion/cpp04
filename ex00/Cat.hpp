/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:48:53 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 18:09:55 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
class	Cat : public Animal{
	public:
		Cat();
		Cat(Cat const &src);

		~Cat();

		Cat const &operator=(Cat const &rhs);

		void	makeSound(void) const;
};
#endif
