/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:13:52 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/06 18:30:04 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	getX(Point const p)
{
	return (p.getx().toFloat());
}

float	getY(Point const p)
{
	return (p.gety().toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	t1;
	float	t2;
	float	sp;
	Point	d = b - a;
	Point	e = c - a;

	t1 = ((getY(e) * (getX(point) - getX(a))) + (getX(e) * (getY(a) - getY(point)))) / ((getX(d) * getY(e)) - (getY(d) * getX(e)));
	if (getY(e))
		sp = getY(e);
	else
		sp = 0.0000001f;
	t2 = (getY(point) - getY(a) - (t1 * getY(d))) / sp;
	return (t1 >= 0 && t2 >= 0 && (t1 + t2) < 1);
}
