/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:36:15 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/14 21:19:10 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "A dog has been created with default constructor." << std::endl;
}

Dog::Dog(const Dog &obj) : Animal()
{
	this->_type = obj._type;
	std::cout << "A dog has been created with copy constructor." << std::endl;
}

Dog::~Dog()
{
	std::cout << "A dog has been destroyed." << std::endl;
}

Dog&	Dog::operator=(const Dog &dog)
{
	this->_type = dog._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog make woffff!!!!" << std::endl;
}
