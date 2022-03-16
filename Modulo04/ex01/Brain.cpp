/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:02:59 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/16 12:48:06 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	size_t	i;

	this->_ideas = new std::string[100];
	i = -1;
	while (++i < 100)
		_ideas[i] = std::to_string(i + 1) + " idea.";
	std::cout << "Brain has been created with a default constructor." << std::endl;
}

Brain::Brain(const Brain &obj)
{
	size_t	i;

	this->_ideas = new std::string[100];
	i = -1;
	while (++i < 100)
		_ideas[i] = obj._ideas[i];
	std::cout << "Brain has been created with a copy constructor." << std::endl;
}

Brain::~Brain()
{
	delete []this->_ideas;
	std::cout << "Brain has been destroied" << std::endl;
}

Brain&	Brain::operator = (const Brain &brain)
{
	size_t	i;

	this->_ideas = new std::string[100];
	i = -1;
	while (++i < 100)
		_ideas[i] = brain._ideas[i];
	std::cout << "Brain has been created with a asignation" << std::endl;
	return (*this);
}

std::string	Brain::getIdea(size_t idea)
{
	return (this->_ideas[idea]);
}

std::string	&Brain::getIdeas(void)
{
	return (*this->_ideas);
}
