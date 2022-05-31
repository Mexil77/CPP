/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:13:03 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/31 14:33:38 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename N>
void	printDouble(N a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	int			arrI[5] = {10, 8, 46, 25, 99};
	float		arrF[5] = {10.75, 8.0, 46.777, 25.66, 99.1};
	std::string	arrS[3] = {"hola", "como", "estas"};
	int			arrLength = sizeof(arrI)/sizeof(arrI[0]);
	int			i = -1;

	while (++i < arrLength)
		std::cout << "arrI[" << i << "]: " << arrI[i] << ", ";
	std::cout << std::endl;
	std::cout << std::endl;
	iter(arrI, arrLength, printDouble);
	std::cout << std::endl;
	std::cout << std::endl;
	arrLength = sizeof(arrF)/sizeof(arrF[0]);
	i = -1;
	while (++i < arrLength)
		std::cout << "arrF[" << i << "]: " << arrF[i] << ", ";
	std::cout << std::endl;
	std::cout << std::endl;
	iter(arrF, arrLength, printDouble);
	std::cout << std::endl;
	std::cout << std::endl;
	arrLength = sizeof(arrS)/sizeof(arrS[0]);
	i = -1;
	while (++i < arrLength)
		std::cout << "arrF[" << i << "]: " << arrS[i] << ", ";
	std::cout << std::endl;
	std::cout << std::endl;
	iter(arrS, arrLength, printDouble);

	return 0;
}

