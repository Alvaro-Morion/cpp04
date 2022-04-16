/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 11:54:02 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/16 13:35:53 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include "iostream"
class	AMateria{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &src);

		virtual	~AMateria();

		AMateria const	&operator=(Amateria const &rhs);

		virtual AMateria	*clone() const = 0;
		virtual	void		use(ICharacter& tarrget);
};
#endif
