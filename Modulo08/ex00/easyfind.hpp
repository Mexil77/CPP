/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:58:44 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/01 16:15:48 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>

class NotFoundException: public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Number not found");
		}
};

template<typename T>
typename T::iterator	easyfind(T V, int find)
{
	for (typename T::iterator i = V.begin(); i != V.end(); i++)
		if (*i == find)
			return (i);
	throw NotFoundException();
}

#endif
