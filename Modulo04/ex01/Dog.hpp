/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:59:22 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/15 17:35:23 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &obj);
		~Dog(void);

		Dog&	operator = (const Dog &dog);

		void	makeSound(void) const;
		void	showIdeas(void) const;
	private:
		Brain	*dogBrain;
};

#endif
