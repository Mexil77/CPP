/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:55:04 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/16 16:38:28 by emgarcia         ###   ########.fr       */
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

void	Animal::makeSound(void) {}

void	Animal::makeSound(void) const {}

void	Animal::showIdeas(void) {}

void	Animal::showIdeas(void) const {}
