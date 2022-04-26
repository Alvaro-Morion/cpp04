/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:15:15 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/26 12:44:47 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
class	Ice : public AMateria{
	public:
		Ice();
		Ice(Ice const &src);

		~Ice();

		void	operator=(Ice const &rhs);

		AMateria	*clone() const;
		void	use(ICharacter& target);
};
#endif
