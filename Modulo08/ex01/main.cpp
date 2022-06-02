/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:13:55 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/02 19:36:04 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	Span	sp1;
	Span	sp2(5);
	Span	sp3(sp2);
	Span	sp4;
	Span	sp6(10);

	sp4 = sp3;
	std::cout << std::endl;
	try
	{
		sp2.addNumber(4);
		sp2.addNumber(5);
		sp2.addNumber(5);
		sp2.addNumber(8);
		sp2.addNumber(1);
		sp2.addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int>	b(4, 5);
	std::vector<int>	a(b.begin(), b.end());
	// std::vector<int>	a(sp2.getList().begin(), sp2.getList().end());
	for (std::vector<int>::iterator it = a.begin(); it != a.end(); it++)
		std::cout << "A.it: " << *it << std::endl;
	for (std::vector<int>::iterator it = sp2.getList().begin(); it != sp2.getList().end(); it++)
		std::cout << "sp2.it: " << *it << std::endl;
	Span	sp5(sp2.getList().begin(), sp2.getList().end());
	std::cout << std::endl;
	std::cout << sp1 << std::endl;
	std::cout << sp2 << std::endl;
	std::cout << sp3 << std::endl;
	std::cout << sp4 << std::endl;
	std::cout << sp5 << std::endl;
	return 0;
}
