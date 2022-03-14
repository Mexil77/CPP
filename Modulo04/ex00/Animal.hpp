/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:04:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/14 21:15:16 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string.h>
# include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& obj);
		virtual ~Animal();

		Animal&	operator = (const Animal &animal);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
	protected:
		std::string	_type;
};

#endif
