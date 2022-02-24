/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexil <mexil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:33:39 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/24 13:21:57 by mexil            ###   ########.fr       */
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
