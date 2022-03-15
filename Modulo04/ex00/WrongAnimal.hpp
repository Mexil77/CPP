/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:36:10 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/15 14:20:23 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &obj);
		virtual ~WrongAnimal(void);

		WrongAnimal&	operator = (const WrongAnimal &wrongAnimal);

		std::string	getType(void) const;
		void		makeSound(void) const;
	protected:
		std::string	_type;
};

#endif
