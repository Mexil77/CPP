/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:33:07 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/04 13:22:19 by emgarcia         ###   ########.fr       */
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

Fixed&	Fixed::operator = (Fixed const &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(fix.getRawBits());
	return (*this);
}

bool	Fixed::operator > (Fixed const &fix) const
{
	if (this->toFloat() > fix.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator >= (Fixed const &fix) const
{
	if (this->toFloat() >= fix.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator < (Fixed const &fix) const
{
	if (this->toFloat() < fix.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator <= (Fixed const &fix) const
{
	if (this->toFloat() <= fix.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator == (Fixed const &fix) const
{
	if (this->toFloat() == fix.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator != (Fixed const &fix) const
{
	if (this->toFloat() != fix.toFloat())
		return (true);
	else
		return (false);
}

Fixed&	Fixed::operator + (Fixed const &fix) const
{
	Fixed	*aux = new Fixed(this->toFloat() + fix.toFloat());
	return (*aux);
}

Fixed&	Fixed::operator - (Fixed const &fix) const
{
	Fixed	*aux = new Fixed(this->toFloat() - fix.toFloat());
	return (*aux);
}

Fixed&	Fixed::operator * (Fixed const &fix) const
{
	Fixed	*aux = new Fixed(this->toFloat() * fix.toFloat());
	return (*aux);
}

Fixed&	Fixed::operator / (Fixed const &fix) const
{
	Fixed	*aux;

	if (fix != Fixed(0))
		aux = new Fixed(this->toFloat() / fix.toFloat());
	else
	{
		std::cout << "divide by 0 is imposible the value of the object going to be 0." << std::endl;
		aux = new Fixed(0.0f);
	}
	return (*aux);
}

Fixed&	Fixed::operator ++ (void)
{
	this->_Z++;
	return (*this);
}

Fixed&	Fixed::operator ++ (int)
{
	Fixed	*aux = new Fixed(this->toFloat());
	++*this;
	return (*aux);
}

Fixed&	Fixed::operator -- (void)
{
	this->_Z--;
	return (*this);
}

Fixed&	Fixed::operator -- (int)
{
	Fixed	*aux = new Fixed(this->toFloat());
	--*this;
	return (*aux);
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

std::ostream&	operator << (std::ostream &o, Fixed const &fix)
{
	o << fix.toFloat();
	return (o);
}
