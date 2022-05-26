/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:12:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/26 13:28:41 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template<typename I>
void	iter(I *arr, int leng, void (*printDouble)(int i, I const &a))
{
	int	i;

	i = -1;
	while (++i < leng)
		printDouble(i, arr[i]);
}

#endif