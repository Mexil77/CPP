/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:14:24 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/02 12:42:51 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->_Z = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called." << std::endl;
	this->operator=(obj);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(fix.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_Z);
}

void	Fixed::setRawBits(int const raw)
{
	this->_Z = raw;
}
