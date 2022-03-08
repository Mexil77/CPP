/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:59:28 by emgarcia          #+#    #+#             */
/*   Updated: 2022/03/08 14:51:15 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	a("Ema1");
	ScavTrap	b("Ema2");
	ClapTrap	c("Ema3");

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	b.guardGate();
	return 0;
}
