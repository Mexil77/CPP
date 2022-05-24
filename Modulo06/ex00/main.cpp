/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:32:23 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/24 16:53:21 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <math.h>

void	displayChar(double number)
{
	char	numChar;

	numChar = static_cast<char>(number);
	if (number >= 32 && number <= 126)
		std::cout << "Char: '" << numChar << "'" << std::endl;
	else if (number != numChar)
		std::cout << "Char: imposible" << std::endl;
	else	
		std::cout << "Char: Non displayable" << std::endl;
}

void	displayInt(double number)
{
	int		numInt;

	numInt = static_cast<int>(number);
	if (number != numInt)
		std::cout << "Int: imposible" << std::endl;
	else
		std::cout << "Int: " << numInt << std::endl;
}

void	displayFloat(double number)
{
	float	numFloat;
	
	numFloat = static_cast<float>(number);
	if (roundf(numFloat) != numFloat || number < -999999 || number > 999999)
		std::cout << "Float: " << numFloat << "f" << std::endl;
	else
		std::cout << "Float: " << numFloat << ".0f" << std::endl;
}

void	displayDouble(double number)
{
	if (number < -999999 || number > 999999 || number != number)
		std::cout << "Double: " << number << std::endl;
	else
		std::cout << "Double: " << number << ".0" << std::endl;
}

int main(int argc, char const *argv[])
{
	std::string	word;
	double		numDouble;

	if (argc != 2)
	{
		std::cout << "Wrong Number of arguments." << std::endl;
		return (0);
	}
	word = argv[1];
	try
	{
		if (word == "+inff")
			numDouble = 1.0 / 0.0;
		else if (word == "-inff")
			numDouble = -1.0 / 0.0;
		else if (word == "nanf")
			numDouble = 0.0 / 0.0;
		else
			numDouble = std::stod(word);	
		std::cout << std::endl;
		displayChar(numDouble);
		displayInt(numDouble);
		displayFloat(numDouble);
		displayDouble(numDouble);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
