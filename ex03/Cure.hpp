/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:15:15 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/26 12:46:18 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
class	Cure : public AMateria{
	public:
		Cure();
		Cure(Cure const &src);

		~Cure();

		void	operator=(Cure const &rhs);

		AMateria	*clone() const;
		void		use(ICharacter& target);
};
#endif
