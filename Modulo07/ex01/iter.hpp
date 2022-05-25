/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:12:57 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/25 18:36:55 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template<typename I, typename F>
void	iter(I *arr, int leng, F func)
{
	int	i;

	i = -1;
	while (++i < leng)
		func(i, arr[i]);
}

#endif