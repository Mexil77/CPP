/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:15:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/06 17:16:41 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		Fixed getx(void) const;
		Fixed gety(void) const;

		Point(void);
		Point(const Point& pt);
		Point(float x, float y);
		~Point(void);

		Point&	operator = (Point const &pt);
		Point&	operator - (Point const &pt) const;
	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif