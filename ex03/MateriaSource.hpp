/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:13:46 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/26 11:30:27 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include <iostream>
 
class MateriaSource : public IMateriaSource{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);

		~MateriaSource();

		MateriaSource const &operator=(MateriaSource const &rhs);

		void	learnMateria(AMateria* m);
		AMateria	*createMateria(std::string const &type);
	private:
		AMateria *memory[4];
};
#endif
