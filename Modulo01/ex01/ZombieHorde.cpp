/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:33:39 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/27 17:58:58 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	size_t		i;
	Zombie		*z = new Zombie[N];

	i = -1;
	while (++i < (size_t)N)
		z[i].setname(name);
	return (z);
}
