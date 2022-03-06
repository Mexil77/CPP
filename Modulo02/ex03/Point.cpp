/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:14:59 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/06 17:22:09 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed()), _y(Fixed()) {}

Point::Point(const Point& pt) : _x(Fixed(pt._x)), _y(Fixed(pt._y)) {}

Point::Point(float x, float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::~Point(void) {}

Point&	Point::operator = (Point const &pt)
{
	(void)pt;
	return (*this);
}

Point&	Point::operator - (Point const &pt) const
{
	Point	*aux = new Point (this->_x.toFloat() - pt._x.toFloat(), this->_y.toFloat() - pt._y.toFloat());
	return (*aux);
}

Fixed	Point::getx(void) const
{
	return (this->_x);
}

Fixed	Point::gety(void) const
{
	return (this->_y);
}
