/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:13:55 by emgarcia          #+#    #+#             */
/*   Updated: 2022/06/03 19:20:04 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	Span	sp1;
	Span	sp2(5);
	Span	sp3(sp2);
	Span	sp4;

	sp4 = sp3;
	std::cout << std::endl;
	try
	{
		// sp1.addNumber(5);
		sp2.addNumber(4);
		sp2.addNumber(5);
		sp2.addNumber(15);
		sp2.addNumber(8);
		sp2.addNumber(1);
		sp2.addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::vector<int>::iterator	itb = sp2.getList().begin();
	std::vector<int>::iterator	ite = sp2.getList().end();
	Span	sp5(++itb, --ite);

	std::cout << std::endl;
	try
	{
		sp3.addNumber(11);
		sp3.addNumber(7);
		sp3.addNumber(46);
		sp3.addNumber(itb, ite);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::cout << std::endl;
	std::cout << "SP1:" << std::endl << sp1 << std::endl;
	std::cout << "SP2:" << std::endl << sp2 << std::endl;
	std::cout << "SP3:" << std::endl << sp3 << std::endl;
	std::cout << "SP4:" << std::endl << sp4 << std::endl;
	std::cout << "SP5:" << std::endl << sp5 << std::endl;
	std::cout << "sp2.shortesSpan(): " << sp2.shortestSpan() << std::endl;
	std::cout << "sp2.longesSpan(): " << sp2.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "sp3.shortesSpan(): " << sp3.shortestSpan() << std::endl;
	std::cout << "sp3.longesSpan(): " << sp3.longestSpan() << std::endl;
	std::cout << std::endl;
	return 0;
}
