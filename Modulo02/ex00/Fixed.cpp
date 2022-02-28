/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:14:24 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/28 20:00:33 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->_Z = 0;
}

Fixed::Fixed(Fixed& obj)
{
	std::cout << "Copy constructor called." << std::endl;
	this->_Z = obj.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_Z);
}

void	Fixed::setRawBits(int const raw)
{
	this->_Z = raw;
}
