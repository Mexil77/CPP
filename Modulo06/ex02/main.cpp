/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:29:43 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/24 16:50:34 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>

Base	*generate(void)
{
	int		desition = rand() % 3;
	Base	*g;

	switch (desition)
	{
	case 0:
		g = new A();
		break;
	case 1:
		g = new B();
		break;
	default:
		g = new C();
		break;
	}
	return (g);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A object by pointer." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B object by pointer." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C object by pointer." << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A object by reference." << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B object by reference." << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C object by reference." << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
}

int main(void)
{
	srand (time(NULL));
	Base	*p = generate();
	identify(p);
	identify(*p);
	delete p;
	return 0;
}
