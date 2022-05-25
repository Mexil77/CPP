/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:13:03 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/25 18:40:28 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	printDouble(int i, int a)
{
	std::cout << "arr[" << i << "]: " << a * 2 << ", ";
}

int main(void)
{
	int		arrI[5] = {10, 8, 46, 25, 99};
	float	arrF[5] = {10.75, 8.0, 46.777, 25.66, 99.1};
	int		arrLength = sizeof(arrI)/sizeof(arrI[0]);
	int		i = -1;

	while (++i < arrLength)
		std::cout << "arrI[" << i << "]: " << arrI[i] << ", ";
	std::cout << std::endl;
	std::cout << std::endl;
	iter(arrI, arrLength, printDouble);
	std::cout << std::endl;
	std::cout << std::endl;
	i = -1;
	while (++i < arrLength)
		std::cout << "arrF[" << i << "]: " << arrF[i] << ", ";
	std::cout << std::endl;
	std::cout << std::endl;
	iter(arrF, arrLength, printDouble);

	return 0;
}

