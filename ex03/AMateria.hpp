/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 11:54:02 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/26 12:54:23 by amorion-         ###   ########.fr       */
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

		void	operator=(AMateria const &rhs);

		std::string const &getType() const;

		virtual AMateria	*clone() const = 0;
		virtual	void		use(ICharacter& target);
};
#endif
