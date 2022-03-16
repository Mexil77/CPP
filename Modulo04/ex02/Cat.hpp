/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:55:54 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/16 16:40:12 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &obj);
		~Cat(void);

		Cat&	operator = (const Cat &cat);

		void	makeSound(void);
		void	makeSound(void) const;
		void	showIdeas(void);
		void	showIdeas(void) const;
	private:
		Brain	*catBrain;
};

#endif
