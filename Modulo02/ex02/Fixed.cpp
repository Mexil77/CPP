/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:33:07 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/04 16:00:54 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_Z = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	this->operator=(obj);
}

Fixed::Fixed(const float Q)
{
	this->_Z = round(Q * (1 << this->_Q));
}

Fixed::Fixed(const int Z)
{
	this->_Z = round(Z * (1 << this->_Q));
}

Fixed::~Fixed(void)
{
}

Fixed&	Fixed::operator = (Fixed const &fix)
{
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
		std::cout << "Divide by 0 is imposible the value of the object going to be 0." << std::endl;
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

Fixed&	Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix2);
	else
		return (fix1);
}

const Fixed&	Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix2);
	else
		return (fix1);
}

Fixed&	Fixed::max(Fixed &fix1, Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	else
		return (fix2);
}

const Fixed&	Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	else
		return (fix2);
}

std::ostream&	operator << (std::ostream &o, Fixed const &fix)
{
	o << fix.toFloat();
	return (o);
}
