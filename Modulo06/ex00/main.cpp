/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:32:23 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/13 17:23:47 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertion.hpp"
#include <string>
#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
	char	numChar;
	int		numInt;
	float	numFloat;
	double	numDouble;

	if (argc != 2)
	{
		std::cout << "Wrong Number of arguments." << std::endl;
		return (0);
	}
	try
	{
		numDouble = std::stod(argv[1]);
		numFloat = numDouble;
		numInt = numFloat;
		numChar = numInt;
		
		std::cout << std::endl;
		if (numInt >= 32 && numInt <= 126)
			std::cout << "Char: " << numChar << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		int tmp = numDouble;
		std::cout << "tmp " << tmp << std::endl;
		if (numDouble != (float)tmp)
			std::cout << "Int: imposible" << std::endl;
		else
			std::cout << "Int: " << numInt << std::endl;
		if (roundf(numFloat) != numFloat)
		{
			std::cout << "Float: " << numFloat << "f" << std::endl;
			std::cout << "Double: " << numDouble << std::endl;
		}
		else
		{
			std::cout << "Float: " << numFloat << ".0f" << std::endl;
			std::cout << "Double: " << numDouble << ".0" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
