/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:12:06 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/25 17:07:08 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template<typename X>
X	max(X a, X b)
{
	if (a > b)
		return (a);
	return (b);
}

template<typename X>
X	min(X a, X b)
{
	if (a < b)
		return (a);
	return (b);
}
template<typename X>

void	swap(X &a, X &b)
{
	X	c = a;
	a = b;
	b = c;
}

#endif