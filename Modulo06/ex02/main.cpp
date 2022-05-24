/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:29:43 by emgarcia          #+#    #+#             */
/*   Updated: 2022/05/24 13:55:53 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int		base = rand();
	int		desition = base % 3;
	std::cout << "base: " << base << std::endl;
	std::cout << "desition: " << desition << std::endl;
	Base	*g = new A();
	return (g);
}

int main(void)
{
	Base	*a = generate();
	Base	*b = generate();
	Base	*c = new C();
	delete a;
	delete b;
	delete c;
	return 0;
}
