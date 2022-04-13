/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:08:48 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 18:19:32 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
class	WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(WrongCat const &src);

		~WrongCat();

		WrongCat const &operator=(WrongCat const &rhs);

		void	makeSound(void) const;
};
#endif
