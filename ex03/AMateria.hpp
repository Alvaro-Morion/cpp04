/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 11:54:02 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/19 11:43:09 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &src);

		virtual	~AMateria();

		AMateria const	&operator=(AMateria const &rhs);

		virtual AMateria	*clone() const = 0;
		virtual	void		use(ICharacter& tarrget);
};
#endif
