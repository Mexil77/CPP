/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:03:09 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/15 17:53:34 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &obj);
		~Brain();

		Brain&	operator = (const Brain &brain);

		std::string	getIdea(size_t idea);
		std::string	&getIdeas(void);
		void		freeIdeas(void);
	private:
		std::string	*ideas = new std::string[100];
};

#endif