/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:57:53 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/31 17:50:58 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	int							find = 30;
	std::vector<int>			V;
	std::list<int>				L;
	std::vector<int>::iterator	b;
	V.push_back(30);
	V.push_back(3);
	// V.push_back(266);
	// V.push_back(456);
	L.push_back(2);
	L.push_back(24);
	L.push_back(249);
	L.push_back(2494);
	b = V.begin();
	std::cout << "b iterator: " << *b++ << std::endl;
	std::cout << "b iterator: " << *b++ << std::endl;
	std::cout << "b iterator: " << *b << std::endl;
	std::cout << "V.size: " << V.size() << std::endl;
	for (size_t i = 0; i < V.size(); i++)
		std::cout << "V[ " << i << " ]: " << V[i] << std::endl;
	if (easyfind(V, find))
		std::cout << "El numero " << find << " SI esta en el vector." << std::endl;
	else
		std::cout << "El numero " << find << " NO esta en el vector." << std::endl;
	// if (easyfind(L, find))
	// 	std::cout << "El numero " << find << " SI esta en la lista." << std::endl;
	// else
	// 	std::cout << "El numero " << find << " NO esta en la lista." << std::endl;
	return 0;
}
