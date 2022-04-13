/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:28:25 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/13 19:11:44 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include<iostream>
class	Brain{

	public:
		Brain();
		Brain(Brain const &Brain);
		
		~Brain();
		
		Brain const &operator=(Brain const &src);

		std::string ideas[100];
};
#endif
