/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:56:47 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/09 16:31:55 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->catBrain = new Brain();
	std::cout << "A cat has been created with default constructor." << std::endl;
}

Cat::Cat(const Cat &obj) : Animal()
{
	this->_type = obj._type;
	this->catBrain = new Brain();
	std::cout << "A cat has been created with copy constructor." << std::endl;
}

Cat::~Cat()
{
	delete this->catBrain;
	std::cout << "A cat has been destroyed." << std::endl;
}

Cat&	Cat::operator = (const Cat &cat)
{
	this->_type = cat._type;
	this->catBrain = new Brain();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat make mewwww!!!!" << std::endl;
}

void	Cat::showIdeas(void) const
{
	size_t	i;

	i = -1;
	while (++i < 100)
		std::cout << this->catBrain->getIdea(i) << std::endl;
}
