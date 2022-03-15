/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:35:48 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/15 14:18:28 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Weird type")
{
	std::cout << "Wrong Animal has been created with a default constructor with a " << _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : _type(obj._type)
{
	std::cout << "Wrong Animal has been created with a copy constructor with a " << _type << " type." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong Animal has been destroied." << std::endl;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal &wrongAnimal)
{
	this->_type = wrongAnimal._type;
	std::cout << "Wrong Animal has been created with an asignation with a " << _type << " type." << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "This animal make a veri weird sound like : sdfksjdhf." << std::endl;
}
