/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:57:53 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/01 16:15:45 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	int					find = 3;
	std::vector<int>	V;
	std::list<int>		L;
	V.push_back(30);
	V.push_back(3);
	V.push_back(266);
	V.push_back(456);
	L.push_back(2);
	L.push_back(24);
	L.push_back(249);
	L.push_back(2494);
	L.push_back(30);
	try
	{
		std::vector<int>::iterator v = easyfind(V, find);
		std::cout << "El numero " << *v << " SI esta en el vector." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::list<int>::iterator l = easyfind(L, find);
		std::cout << "El numero " << *l << " SI esta en la lista." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
