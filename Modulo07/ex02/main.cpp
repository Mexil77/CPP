/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:57:13 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/26 20:23:54 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int>		*A = new Array<int>[5];
	Array<float>	*B = new Array<float>(8);
	Array<int>		*C = new Array<int>(*A);
	Array<float>	*D = new Array<float>();
	// float			p = B[2];
	// B[2] = 3;
	*D = *B;
	std::cout << std::endl;
	std::cout << "A: " << A << std::endl;
	std::cout << "*A: " << *A << std::endl;
	// std::cout << "A[0]: " << A[0] << std::endl;
	std::cout << "B: " << B << std::endl;
	std::cout << "*B: " << *B << std::endl;
	std::cout << "C: " << C << std::endl;
	std::cout << "*C: " << *C << std::endl;
	std::cout << "D: " << D << std::endl;
	std::cout << "*D: " << *D << std::endl;
	delete A;
	delete B;
	delete C;
	delete D;
	// system("leaks Array");
	return 0;
}

