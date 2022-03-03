/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 12:48:29 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/03 14:40:03 by emgarcia         ###   ########.fr       */
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

Fixed::Fixed(const float Q)
{
	std::cout << "Float constructor called." << std::endl;
	this->_Z = round(Q * (1 << this->_Q));
}

Fixed::Fixed(const int Z)
{
	std::cout << "Int constructor called." << std::endl;
	this->_Z = round(Z * (1 << this->_Q));
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
	return (this->_Z);
}

void	Fixed::setRawBits(int const raw)
{
	this->_Z = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_Z / (1 << this->_Q));
}

int	Fixed::toInt(void) const
{
	return ((int)this->_Z / (1 << this->_Q));
}

std::ostream&	operator<<(std::ostream &o, Fixed const &fix)
{
	o << fix.toFloat();
	return (o);
}
