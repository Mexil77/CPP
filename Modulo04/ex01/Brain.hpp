/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:03:09 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/16 12:48:10 by emgarcia         ###   ########.fr       */
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
	private:
		std::string	*_ideas;
};

#endif