/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:46:59 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/16 13:41:03 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp""
class	Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
	public:
		Character();
		Character(std::string const name);
		Character(Character const &rhs);

		~Character();

		Character const	&oerator=(Character const &rhs);

		std::string const	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
}
