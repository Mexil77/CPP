/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:34:33 by emgarcia          #+#    #+#             */
/*   Updated: 2022/02/27 17:58:42 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	size_t	i;
	size_t	N;

	N = 10;
	Zombie *z = zombieHorde(N, "Pepe");
	i = -1;
	while (++i < N)
	{
		std::cout << i + 1 << ".- ";
		z[i].announce();
	}
	delete []z;
	return 0;
}
