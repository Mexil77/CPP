/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:04:59 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/14 22:55:53 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Unknow type")
{
	std::cout << "An animal has been created with a default constructor." << std::endl;
}

Animal::Animal(const Animal &obj) : _type(obj._type)
{
	std::cout << "An animal has been created with copi constructor with " << this->_type << " type." << std::endl;
}

Animal::~Animal()
{
	std::cout << this->_type << " has been destroied." << std::endl;
}

Animal&	Animal::operator = (const Animal &animal)
{
	this->_type = animal._type;
	std::cout << "An animal has been copied with " << this->_type << " type." << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Weird sound is listen from a " << this->_type << " of animal." << std::endl;
}
