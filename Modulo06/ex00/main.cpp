/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:32:23 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/11 14:31:20 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertion.hpp"
#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	char	numChar;
	int		numInt;
	// float	numFloat;
	// double	numDouble;

	std::cout << argc << std::endl;
	std::cout << argv[0] << std::endl;

	try
	{
		numInt = std::stoi(argv[1]);
		numChar = numInt;
		std::cout << std::endl;
		std::cout << "Char: " << numChar << std::endl;
		std::cout << "Int: " << numInt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}
