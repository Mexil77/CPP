/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:15:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/04 16:28:09 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(const Point&);
		Point(float x, float y);
		~Point(void);

		Point&	operator = (Point const &pt);
	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif