/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:13:52 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/07 13:33:53 by emgarcia         ###   ########.fr       */
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

	if (getY(e))
		sp = getY(e);
	else
		sp = 0.00001f;
	t1 = ((sp * (getX(point) - getX(a))) - (getX(e) * (getY(point) - getY(a)))) / ((getX(d) * sp) - (getY(d) * getX(e)));
	t2 = (getY(point) - getY(a) - (t1 * getY(d))) / sp;
	return (t1 > 0 && t2 > 0 && (t1 + t2) < 1);
}
