/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:13:00 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 18:19:34 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
class	WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);

		virtual ~WrongAnimal();

		WrongAnimal const &operator=(WrongAnimal const &rhs);
		
		std::string getType(void) const;
		void makeSound(void) const;

	protected:
		std::string type;
};
#endif
