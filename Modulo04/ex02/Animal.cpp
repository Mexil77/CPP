/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:55:04 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/16 14:16:48 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal()
{
	std::cout << this->_type << " has been destroied." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Weird sound is listen from a " << this->_type << " of animal." << std::endl;
}

void	Animal::showIdeas(void) const
{
}
