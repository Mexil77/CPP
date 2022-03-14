/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:36:19 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/14 22:52:46 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "A cat has been created with default constructor." << std::endl;
}

Cat::Cat(const Cat &obj) : Animal()
{
	this->_type = obj._type;
	std::cout << "A cat has been created with copy constructor." << std::endl;
}

Cat::~Cat()
{
	std::cout << "A cat has been destroyed." << std::endl;
}

Cat&	Cat::operator=(const Cat &cat)
{
	this->_type = cat._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat make mewwww!!!!" << std::endl;
}