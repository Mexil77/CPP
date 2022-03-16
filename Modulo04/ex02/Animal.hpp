/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:55:46 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/16 14:12:17 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string.h>
# include <iostream>

class Animal
{
	public:
		virtual	~Animal(void);

		std::string		getType(void) const;
		void			setType(std::string type);
		virtual void	makeSound(void) const;
		virtual void	showIdeas(void) const;
	protected:
		std::string	_type;
};

#endif
