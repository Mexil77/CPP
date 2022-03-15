/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:36:07 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/15 14:15:53 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat has been created with default constructor and " << this->_type << " type." << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal()
{
	this->_type = obj._type;
	std::cout << "WrongCat has been created with copy constructor and " << this->_type << " type." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroied." << std::endl;
}

WrongCat&	WrongCat::operator = (const WrongCat &wrongCat)
{
	this->_type = wrongCat._type;
	std::cout << "WrongCat has been created with asignation and " << this->_type << " type." << std::endl;
	return (*this);
}
