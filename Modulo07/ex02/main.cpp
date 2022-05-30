/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:57:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/30 18:56:28 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int>		*A = new Array<int>(5);
	Array<float>	*B = new Array<float>(8);
	Array<int>		*C = new Array<int>(*A);
	Array<float>	*D = new Array<float>();
	Array<float>	*F = new Array<float>();

	*D = *B;
	std::cout << std::endl;
	try
	{
		(*B)[0] = 5.2;
		(*D)[6] = 13.627;
		(*F)[8] = 8.8;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "A: " << A << std::endl;
	std::cout << "*A: " << *A << std::endl;
	std::cout << "B: " << B << std::endl;
	std::cout << "*B: " << *B << std::endl;
	std::cout << "C: " << C << std::endl;
	std::cout << "*C: " << *C << std::endl;
	std::cout << "D: " << D << std::endl;
	std::cout << "*D: " << *D << std::endl;
	std::cout << "F: " << F << std::endl;
	std::cout << "*F: " << *F << std::endl;
	delete A;
	delete B;
	delete C;
	delete D;
	delete F;
	// system("leaks Array");
	return 0;
}

