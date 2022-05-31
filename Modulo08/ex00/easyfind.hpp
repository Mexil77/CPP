/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:58:44 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/31 17:38:53 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <vector>
# include <list>

template<typename T>
bool	easyfind(T V, int find)
{
	for (size_t i = 0; i < V.size(); i++)
		if (find == V[i])
			return (true);
	return (false);
}

#endif
