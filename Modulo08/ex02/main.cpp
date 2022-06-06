/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:47:05 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/06 17:26:40 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int>	a;
	MutantStack<int>	b(a);
	MutantStack<int>	c;
	MutantStack<int>	e;

	a.push(5);
	a.push(10);
	MutantStack<int>	d(a);
	c = b;
	e = d;
	a.pop();

	std::cout << std::endl;
	std::cout << "a :" << std::endl << a << std::endl;
	std::cout << "b :" << std::endl << b << std::endl;
	std::cout << "c :" << std::endl << c << std::endl;
	std::cout << "d :" << std::endl << d << std::endl;
	std::cout << "e :" << std::endl << e << std::endl;
	// try
	// {
	// 	std::cout << "a.top: " << a.top() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	return 0;
}
